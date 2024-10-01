#include <sdkconfig.h>

#include <chrono>
#include <format>
#include <cmath>
#include <thread>

#include "hid-rp-gamepad.hpp"

#include "NimBLEDevice.h"
#include "NimBLEHIDDevice.h"
#include "NimBLEServer.h"

using namespace std::chrono_literals;

extern "C" void app_main(void) {
  static auto start = std::chrono::high_resolution_clock::now();
  static auto elapsed = [&]() {
    auto now = std::chrono::high_resolution_clock::now();
    return std::chrono::duration<float>(now - start).count();
  };

  printf("Bootup");

  static constexpr uint8_t input_report_id = 1;
  static constexpr size_t num_buttons = 15;
  static constexpr int joystick_min = 0;
  static constexpr int joystick_max = 65534;
  static constexpr int trigger_min = 0;
  static constexpr int trigger_max = 1023;

  using GamepadInput =
      espp::GamepadInputReport<num_buttons, std::uint16_t, std::uint16_t, joystick_min,
                               joystick_max, trigger_min, trigger_max, input_report_id>;
  GamepadInput gamepad_input_report;

  static constexpr uint8_t output_report_id = 2;
  static constexpr size_t num_leds = 4;
  using GamepadLeds = espp::GamepadLedOutputReport<num_leds, output_report_id>;
  GamepadLeds gamepad_leds_report;

  using namespace hid::page;
  using namespace hid::rdf;
  auto raw_descriptor = descriptor(usage_page<generic_desktop>(), usage(generic_desktop::GAMEPAD),
                                   collection::application(gamepad_input_report.get_descriptor(),
                                                           gamepad_leds_report.get_descriptor()));

  // Generate the report descriptor for the gamepad
  auto descriptor = std::vector<uint8_t>(raw_descriptor.begin(), raw_descriptor.end());

  printf("Report Descriptor:");
  printf("%s\n", std::format("  Size: {}", descriptor.size()).c_str());

  // initialize the BLE stack
  NimBLEDevice::init("NimBLE HID Gamepad");

  // now let's make the BLE server
  NimBLEServer *ble_server = NimBLEDevice::createServer();

  // set advertise on disconnect to true
  ble_server->advertiseOnDisconnect(true);

  // for HID we need to set some security
  bool bonding = true;
  bool mitm = false;
  bool secure_connections = true;
  NimBLEDevice::setSecurityAuth(bonding, mitm, secure_connections);
  // and some i/o and key config
  NimBLEDevice::setSecurityIOCap(BLE_HS_IO_NO_INPUT_OUTPUT);
  NimBLEDevice::setSecurityInitKey(BLE_SM_PAIR_KEY_DIST_ENC | BLE_SM_PAIR_KEY_DIST_ID);
  NimBLEDevice::setSecurityRespKey(BLE_SM_PAIR_KEY_DIST_ENC | BLE_SM_PAIR_KEY_DIST_ID);

  // add the callbacks for the server

  // now make the HID Device
  NimBLEHIDDevice *hid_device = new NimBLEHIDDevice(ble_server);

  // configure the services
  [[maybe_unused]] auto device_info_service = hid_device->deviceInfo();
  [[maybe_unused]] auto battery_service = hid_device->batteryService();
  [[maybe_unused]] auto hid_service = hid_device->hidService();

  hid_device->hidInfo(0x00, 0x01);
  hid_device->manufacturer("Finger563");
  hid_device->pnp(0x02, 0x045E, 0x02FD, 0x0110); // 0x02: USB, 0x045E: Microsoft, 0x02FD: Xbox One

  // set the report map
  hid_device->reportMap((uint8_t *)descriptor.data(), descriptor.size());

  // use the HID service to make an input report characteristic
  auto input_report = hid_device->inputReport(input_report_id);

  // use the HID service to make an output report characteristic
  [[maybe_unused]] auto output_report = hid_device->outputReport(output_report_id);

  // now start the services
  hid_device->startServices();

  // now start the server
  ble_server->start();

  // set the advertisement data
  NimBLEAdvertisementData adv_data;
  adv_data.setFlags(BLE_HS_ADV_F_DISC_GEN);
  adv_data.setName("NimBLE HID Gamepad");
  adv_data.setAppearance(0x03C0); // Gamepad
  adv_data.setPartialServices16({hid_service->getUUID()});
  adv_data.addTxPower();

  // now start advertising
  auto adv = NimBLEDevice::getAdvertising();
  adv->setAdvertisementData(adv_data);
  adv->setMinInterval(0x20);
  adv->setMaxInterval(0x40);
  adv->setScanResponse(false);
  adv->addTxPower();
  adv->setAdvertisementType(BLE_GAP_CONN_MODE_UND);
  auto started = adv->start(30'000, nullptr);
  if (started) {
    printf("Advertising started\n");
  } else {
    printf("Advertising failed to start\n");
    return;
  }

  printf("[%0.3f] waiting for connection...\n", elapsed());

  // now lets update the battery level and send an input report every second
  uint8_t battery_level = 99;
  // change the gamepad inputs every second
  int button_index = 1;
  bool was_connected = false;
  while (true) {
    auto start = std::chrono::steady_clock::now();

    // if we are now connected, but were not, then get the services
    bool is_connected = ble_server->getConnectedCount() > 0;

    if (is_connected && !was_connected) {
      was_connected = true;
      printf("[%0.3f] Connected\n", elapsed());
    } else if (!is_connected) {
      was_connected = false;
      printf("[%0.3f] Disconnected\n", elapsed());
    }

    if (!is_connected) {
      // go up a line and clear it
      printf("\033[1A\033[K");
      printf("[%0.3f] waiting for connection...\n", elapsed());
      // sleep
      std::this_thread::sleep_until(start + 100ms);
      continue;
    }

    // update the battery level
    hid_device->setBatteryLevel(battery_level);
    battery_level = (battery_level % 100) + 1;

    // cycle through the possible d-pad states
    GamepadInput::Hat hat = (GamepadInput::Hat)button_index;
    // use the button index to set the position of the right joystick
    float angle = 2.0f * M_PI * button_index / num_buttons;

    gamepad_input_report.reset();
    gamepad_input_report.set_hat(hat);
    gamepad_input_report.set_button(button_index, true);
    // joystick inputs are in the range [-1, 1] float
    gamepad_input_report.set_right_joystick(cos(angle), sin(angle));
    gamepad_input_report.set_left_joystick(sin(angle), cos(angle));
    // trigger inputs are in the range [0, 1] float
    gamepad_input_report.set_accelerator(std::abs(sin(angle)));
    gamepad_input_report.set_brake(std::abs(cos(angle)));

    button_index = (button_index % num_buttons) + 1;

    // send an input report
    auto report = gamepad_input_report.get_report();
    input_report->notify(report);

    // sleep
    std::this_thread::sleep_until(start + 1s);
  }
}
