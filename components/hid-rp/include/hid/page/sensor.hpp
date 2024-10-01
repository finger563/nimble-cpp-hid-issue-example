#ifndef __HID_PAGE_SENSOR_HPP_
#define __HID_PAGE_SENSOR_HPP_

#include "hid/usage.hpp"

namespace hid::page {
enum class sensor : std::uint16_t;
template <> struct info<sensor> {
  constexpr static page_id_t page_id = 0x0020;
  constexpr static usage_id_t max_usage_id = 0xf000;
  constexpr static const char *name = "Sensors";
};
enum class sensor : std::uint16_t {
  SENSOR = 0x0001,
  BIOMETRIC = 0x0010,
  BIOMETRIC_HUMAN_PRESENCE = 0x0011,
  BIOMETRIC_HUMAN_PROXIMITY = 0x0012,
  BIOMETRIC_HUMAN_TOUCH = 0x0013,
  BIOMETRIC_BLOOD_PRESSURE = 0x0014,
  BIOMETRIC_BODY_TEMPERATURE = 0x0015,
  BIOMETRIC_HEART_RATE = 0x0016,
  BIOMETRIC_HEART_RATE_VARIABILITY = 0x0017,
  BIOMETRIC_PERIPHERAL_OXYGEN_SATURATION = 0x0018,
  BIOMETRIC_RESPIRATORY_RATE = 0x0019,
  ELECTRICAL = 0x0020,
  ELECTRICAL_CAPACITANCE = 0x0021,
  ELECTRICAL_CURRENT = 0x0022,
  ELECTRICAL_POWER = 0x0023,
  ELECTRICAL_INDUCTANCE = 0x0024,
  ELECTRICAL_RESISTANCE = 0x0025,
  ELECTRICAL_VOLTAGE = 0x0026,
  ELECTRICAL_POTENTIOMETER = 0x0027,
  ELECTRICAL_FREQUENCY = 0x0028,
  ELECTRICAL_PERIOD = 0x0029,
  ENVIRONMENTAL = 0x0030,
  ENVIRONMENTAL_ATMOSPHERIC_PRESSURE = 0x0031,
  ENVIRONMENTAL_HUMIDITY = 0x0032,
  ENVIRONMENTAL_TEMPERATURE = 0x0033,
  ENVIRONMENTAL_WIND_DIRECTION = 0x0034,
  ENVIRONMENTAL_WIND_SPEED = 0x0035,
  ENVIRONMENTAL_AIR_QUALITY = 0x0036,
  ENVIRONMENTAL_HEAT_INDEX = 0x0037,
  ENVIRONMENTAL_SURFACE_TEMPERATURE = 0x0038,
  ENVIRONMENTAL_VOLATILE_ORGANIC_COMPOUNDS = 0x0039,
  ENVIRONMENTAL_OBJECT_PRESENCE = 0x003a,
  ENVIRONMENTAL_OBJECT_PROXIMITY = 0x003b,
  LIGHT = 0x0040,
  LIGHT_AMBIENT_LIGHT = 0x0041,
  LIGHT_CONSUMER_INFRARED = 0x0042,
  LIGHT_INFRARED_LIGHT = 0x0043,
  LIGHT_VISIBLE_LIGHT = 0x0044,
  LIGHT_ULTRAVIOLET_LIGHT = 0x0045,
  LOCATION = 0x0050,
  LOCATION_BROADCAST = 0x0051,
  LOCATION_DEAD_RECKONING = 0x0052,
  LOCATION_GPS = 0x0053,
  LOCATION_LOOKUP = 0x0054,
  LOCATION_OTHER = 0x0055,
  LOCATION_STATIC = 0x0056,
  LOCATION_TRIANGULATION = 0x0057,
  MECHANICAL = 0x0060,
  MECHANICAL_BOOLEAN_SWITCH = 0x0061,
  MECHANICAL_BOOLEAN_SWITCH_ARRAY = 0x0062,
  MECHANICAL_MULTIVALUE_SWITCH = 0x0063,
  MECHANICAL_FORCE = 0x0064,
  MECHANICAL_PRESSURE = 0x0065,
  MECHANICAL_STRAIN = 0x0066,
  MECHANICAL_WEIGHT = 0x0067,
  MECHANICAL_HAPTIC_VIBRATOR = 0x0068,
  MECHANICAL_HALL_EFFECT_SWITCH = 0x0069,
  MOTION = 0x0070,
  MOTION_ACCELEROMETER_1D = 0x0071,
  MOTION_ACCELEROMETER_2D = 0x0072,
  MOTION_ACCELEROMETER_3D = 0x0073,
  MOTION_GYROMETER_1D = 0x0074,
  MOTION_GYROMETER_2D = 0x0075,
  MOTION_GYROMETER_3D = 0x0076,
  MOTION_MOTION_DETECTOR = 0x0077,
  MOTION_SPEEDOMETER = 0x0078,
  MOTION_ACCELEROMETER = 0x0079,
  MOTION_GYROMETER = 0x007a,
  MOTION_GRAVITY_VECTOR = 0x007b,
  MOTION_LINEAR_ACCELEROMETER = 0x007c,
  ORIENTATION = 0x0080,
  ORIENTATION_COMPASS_1D = 0x0081,
  ORIENTATION_COMPASS_2D = 0x0082,
  ORIENTATION_COMPASS_3D = 0x0083,
  ORIENTATION_INCLINOMETER_1D = 0x0084,
  ORIENTATION_INCLINOMETER_2D = 0x0085,
  ORIENTATION_INCLINOMETER_3D = 0x0086,
  ORIENTATION_DISTANCE_1D = 0x0087,
  ORIENTATION_DISTANCE_2D = 0x0088,
  ORIENTATION_DISTANCE_3D = 0x0089,
  ORIENTATION_DEVICE_ORIENTATION = 0x008a,
  ORIENTATION_COMPASS = 0x008b,
  ORIENTATION_INCLINOMETER = 0x008c,
  ORIENTATION_DISTANCE = 0x008d,
  ORIENTATION_RELATIVE_ORIENTATION = 0x008e,
  ORIENTATION_SIMPLE_ORIENTATION = 0x008f,
  SCANNER = 0x0090,
  SCANNER_BARCODE = 0x0091,
  SCANNER_RFID = 0x0092,
  SCANNER_NFC = 0x0093,
  TIME = 0x00a0,
  TIME_ALARM_TIMER = 0x00a1,
  TIME_REAL_TIME_CLOCK = 0x00a2,
  PERSONAL_ACTIVITY = 0x00b0,
  PERSONAL_ACTIVITY_ACTIVITY_DETECTION = 0x00b1,
  PERSONAL_ACTIVITY_DEVICE_POSITION = 0x00b2,
  PERSONAL_ACTIVITY_FLOOR_TRACKER = 0x00b3,
  PERSONAL_ACTIVITY_PEDOMETER = 0x00b4,
  PERSONAL_ACTIVITY_STEP_DETECTION = 0x00b5,
  ORIENTATION_EXTENDED = 0x00c0,
  ORIENTATION_EXTENDED_GEOMAGNETIC_ORIENTATION = 0x00c1,
  ORIENTATION_EXTENDED_MAGNETOMETER = 0x00c2,
  GESTURE = 0x00d0,
  GESTURE_CHASSIS_FLIP_GESTURE = 0x00d1,
  GESTURE_HINGE_FOLD_GESTURE = 0x00d2,
  OTHER = 0x00e0,
  OTHER_CUSTOM = 0x00e1,
  OTHER_GENERIC = 0x00e2,
  OTHER_GENERIC_ENUMERATOR = 0x00e3,
  OTHER_HINGE_ANGLE = 0x00e4,
  VENDOR_RESERVED_1 = 0x00f0,
  VENDOR_RESERVED_2 = 0x00f1,
  VENDOR_RESERVED_3 = 0x00f2,
  VENDOR_RESERVED_4 = 0x00f3,
  VENDOR_RESERVED_5 = 0x00f4,
  VENDOR_RESERVED_6 = 0x00f5,
  VENDOR_RESERVED_7 = 0x00f6,
  VENDOR_RESERVED_8 = 0x00f7,
  VENDOR_RESERVED_9 = 0x00f8,
  VENDOR_RESERVED_10 = 0x00f9,
  VENDOR_RESERVED_11 = 0x00fa,
  VENDOR_RESERVED_12 = 0x00fb,
  VENDOR_RESERVED_13 = 0x00fc,
  VENDOR_RESERVED_14 = 0x00fd,
  VENDOR_RESERVED_15 = 0x00fe,
  VENDOR_RESERVED_16 = 0x00ff,
  EVENT = 0x0200,
  EVENT_SENSOR_STATE = 0x0201,
  EVENT_SENSOR_EVENT = 0x0202,
  PROPERTY = 0x0300,
  PROPERTY_FRIENDLY_NAME = 0x0301,
  PROPERTY_PERSISTENT_UNIQUE_ID = 0x0302,
  PROPERTY_SENSOR_STATUS = 0x0303,
  PROPERTY_MINIMUM_REPORT_INTERVAL = 0x0304,
  PROPERTY_SENSOR_MANUFACTURER = 0x0305,
  PROPERTY_SENSOR_MODEL = 0x0306,
  PROPERTY_SENSOR_SERIAL_NUMBER = 0x0307,
  PROPERTY_SENSOR_DESCRIPTION = 0x0308,
  PROPERTY_SENSOR_CONNECTION_TYPE = 0x0309,
  PROPERTY_SENSOR_DEVICE_PATH = 0x030a,
  PROPERTY_HARDWARE_REVISION = 0x030b,
  PROPERTY_FIRMWARE_VERSION = 0x030c,
  PROPERTY_RELEASE_DATE = 0x030d,
  PROPERTY_REPORT_INTERVAL = 0x030e,
  PROPERTY_CHANGE_SENSITIVITY_ABSOLUTE = 0x030f,
  PROPERTY_CHANGE_SENSITIVITY_PERCENT_OF_RANGE = 0x0310,
  PROPERTY_CHANGE_SENSITIVITY_PERCENT_RELATIVE = 0x0311,
  PROPERTY_ACCURACY = 0x0312,
  PROPERTY_RESOLUTION = 0x0313,
  PROPERTY_MAXIMUM = 0x0314,
  PROPERTY_MINIMUM = 0x0315,
  PROPERTY_REPORTING_STATE = 0x0316,
  PROPERTY_SAMPLING_RATE = 0x0317,
  PROPERTY_RESPONSE_CURVE = 0x0318,
  PROPERTY_POWER_STATE = 0x0319,
  PROPERTY_MAXIMUM_FIFO_EVENTS = 0x031a,
  PROPERTY_REPORT_LATENCY = 0x031b,
  PROPERTY_FLUSH_FIFO_EVENTS = 0x031c,
  PROPERTY_MAXIMUM_POWER_CONSUMPTION = 0x031d,
  PROPERTY_IS_PRIMARY = 0x031e,
  PROPERTY_HUMAN_PRESENCE_DETECTION_TYPE = 0x031f,
  DATA_FIELD_LOCATION = 0x0400,
  DATA_FIELD_ALTITUDE_ANTENNA_SEA_LEVEL = 0x0402,
  DATA_FIELD_DIFFERENTIAL_REFERENCE_STATION_ID = 0x0403,
  DATA_FIELD_ALTITUDE_ELLIPSOID_ERROR = 0x0404,
  DATA_FIELD_ALTITUDE_ELLIPSOID = 0x0405,
  DATA_FIELD_ALTITUDE_SEA_LEVEL_ERROR = 0x0406,
  DATA_FIELD_ALTITUDE_SEA_LEVEL = 0x0407,
  DATA_FIELD_DIFFERENTIAL_GPS_DATA_AGE = 0x0408,
  DATA_FIELD_ERROR_RADIUS = 0x0409,
  DATA_FIELD_FIX_QUALITY = 0x040a,
  DATA_FIELD_FIX_TYPE = 0x040b,
  DATA_FIELD_GEOIDAL_SEPARATION = 0x040c,
  DATA_FIELD_GPS_OPERATION_MODE = 0x040d,
  DATA_FIELD_GPS_SELECTION_MODE = 0x040e,
  DATA_FIELD_GPS_STATUS = 0x040f,
  DATA_FIELD_POSITION_DILUTION_OF_PRECISION = 0x0410,
  DATA_FIELD_HORIZONTAL_DILUTION_OF_PRECISION = 0x0411,
  DATA_FIELD_VERTICAL_DILUTION_OF_PRECISION = 0x0412,
  DATA_FIELD_LATITUDE = 0x0413,
  DATA_FIELD_LONGITUDE = 0x0414,
  DATA_FIELD_TRUE_HEADING = 0x0415,
  DATA_FIELD_MAGNETIC_HEADING = 0x0416,
  DATA_FIELD_MAGNETIC_VARIATION = 0x0417,
  DATA_FIELD_SPEED = 0x0418,
  DATA_FIELD_SATELLITES_IN_VIEW = 0x0419,
  DATA_FIELD_SATELLITES_IN_VIEW_AZIMUTH = 0x041a,
  DATA_FIELD_SATELLITES_IN_VIEW_ELEVATION = 0x041b,
  DATA_FIELD_SATELLITES_IN_VIEW_IDS = 0x041c,
  DATA_FIELD_SATELLITES_IN_VIEW_PRNS = 0x041d,
  DATA_FIELD_SATELLITES_IN_VIEW_S_N_RATIOS = 0x041e,
  DATA_FIELD_SATELLITES_USED_COUNT = 0x041f,
  DATA_FIELD_SATELLITES_USED_PRNS = 0x0420,
  DATA_FIELD_NMEA_SENTENCE = 0x0421,
  DATA_FIELD_ADDRESS_LINE_1 = 0x0422,
  DATA_FIELD_ADDRESS_LINE_2 = 0x0423,
  DATA_FIELD_CITY = 0x0424,
  DATA_FIELD_STATE_OR_PROVINCE = 0x0425,
  DATA_FIELD_COUNTRY_OR_REGION = 0x0426,
  DATA_FIELD_POSTAL_CODE = 0x0427,
  PROPERTY_LOCATION = 0x042a,
  PROPERTY_LOCATION_DESIRED_ACCURACY = 0x042b,
  DATA_FIELD_ENVIRONMENTAL = 0x0430,
  DATA_FIELD_ATMOSPHERIC_PRESSURE = 0x0431,
  DATA_FIELD_RELATIVE_HUMIDITY = 0x0433,
  DATA_FIELD_TEMPERATURE = 0x0434,
  DATA_FIELD_WIND_DIRECTION = 0x0435,
  DATA_FIELD_WIND_SPEED = 0x0436,
  DATA_FIELD_AIR_QUALITY_INDEX = 0x0437,
  DATA_FIELD_EQUIVALENT_CO2 = 0x0438,
  DATA_FIELD_VOLATILE_ORGANIC_COMPOUND_CONCENTRATION = 0x0439,
  DATA_FIELD_OBJECT_PRESENCE = 0x043a,
  DATA_FIELD_OBJECT_PROXIMITY_RANGE = 0x043b,
  DATA_FIELD_OBJECT_PROXIMITY_OUT_OF_RANGE = 0x043c,
  PROPERTY_ENVIRONMENTAL = 0x0440,
  PROPERTY_REFERENCE_PRESSURE = 0x0441,
  DATA_FIELD_MOTION = 0x0450,
  DATA_FIELD_MOTION_STATE = 0x0451,
  DATA_FIELD_ACCELERATION = 0x0452,
  DATA_FIELD_ACCELERATION_AXIS_X = 0x0453,
  DATA_FIELD_ACCELERATION_AXIS_Y = 0x0454,
  DATA_FIELD_ACCELERATION_AXIS_Z = 0x0455,
  DATA_FIELD_ANGULAR_VELOCITY = 0x0456,
  DATA_FIELD_ANGULAR_VELOCITY_ABOUT_X_AXIS = 0x0457,
  DATA_FIELD_ANGULAR_VELOCITY_ABOUT_Y_AXIS = 0x0458,
  DATA_FIELD_ANGULAR_VELOCITY_ABOUT_Z_AXIS = 0x0459,
  DATA_FIELD_ANGULAR_POSITION = 0x045a,
  DATA_FIELD_ANGULAR_POSITION_ABOUT_X_AXIS = 0x045b,
  DATA_FIELD_ANGULAR_POSITION_ABOUT_Y_AXIS = 0x045c,
  DATA_FIELD_ANGULAR_POSITION_ABOUT_Z_AXIS = 0x045d,
  DATA_FIELD_MOTION_SPEED = 0x045e,
  DATA_FIELD_MOTION_INTENSITY = 0x045f,
  DATA_FIELD_ORIENTATION = 0x0470,
  DATA_FIELD_HEADING = 0x0471,
  DATA_FIELD_HEADING_X_AXIS = 0x0472,
  DATA_FIELD_HEADING_Y_AXIS = 0x0473,
  DATA_FIELD_HEADING_Z_AXIS = 0x0474,
  DATA_FIELD_HEADING_COMPENSATED_MAGNETIC_NORTH = 0x0475,
  DATA_FIELD_HEADING_COMPENSATED_TRUE_NORTH = 0x0476,
  DATA_FIELD_HEADING_MAGNETIC_NORTH = 0x0477,
  DATA_FIELD_HEADING_TRUE_NORTH = 0x0478,
  DATA_FIELD_DISTANCE = 0x0479,
  DATA_FIELD_DISTANCE_X_AXIS = 0x047a,
  DATA_FIELD_DISTANCE_Y_AXIS = 0x047b,
  DATA_FIELD_DISTANCE_Z_AXIS = 0x047c,
  DATA_FIELD_DISTANCE_OUT_OF_RANGE = 0x047d,
  DATA_FIELD_TILT = 0x047e,
  DATA_FIELD_TILT_X_AXIS = 0x047f,
  DATA_FIELD_TILT_Y_AXIS = 0x0480,
  DATA_FIELD_TILT_Z_AXIS = 0x0481,
  DATA_FIELD_ROTATION_MATRIX = 0x0482,
  DATA_FIELD_QUATERNION = 0x0483,
  DATA_FIELD_MAGNETIC_FLUX = 0x0484,
  DATA_FIELD_MAGNETIC_FLUX_X_AXIS = 0x0485,
  DATA_FIELD_MAGNETIC_FLUX_Y_AXIS = 0x0486,
  DATA_FIELD_MAGNETIC_FLUX_Z_AXIS = 0x0487,
  DATA_FIELD_MAGNETOMETER_ACCURACY = 0x0488,
  DATA_FIELD_SIMPLE_ORIENTATION_DIRECTION = 0x0489,
  DATA_FIELD_MECHANICAL = 0x0490,
  DATA_FIELD_BOOLEAN_SWITCH_STATE = 0x0491,
  DATA_FIELD_BOOLEAN_SWITCH_ARRAY_STATES = 0x0492,
  DATA_FIELD_MULTIVALUE_SWITCH_VALUE = 0x0493,
  DATA_FIELD_FORCE = 0x0494,
  DATA_FIELD_ABSOLUTE_PRESSURE = 0x0495,
  DATA_FIELD_GAUGE_PRESSURE = 0x0496,
  DATA_FIELD_STRAIN = 0x0497,
  DATA_FIELD_WEIGHT = 0x0498,
  PROPERTY_MECHANICAL = 0x04a0,
  PROPERTY_VIBRATION_STATE = 0x04a1,
  PROPERTY_FORWARD_VIBRATION_SPEED = 0x04a2,
  PROPERTY_BACKWARD_VIBRATION_SPEED = 0x04a3,
  DATA_FIELD_BIOMETRIC = 0x04b0,
  DATA_FIELD_HUMAN_PRESENCE = 0x04b1,
  DATA_FIELD_HUMAN_PROXIMITY_RANGE = 0x04b2,
  DATA_FIELD_HUMAN_PROXIMITY_OUT_OF_RANGE = 0x04b3,
  DATA_FIELD_HUMAN_TOUCH_STATE = 0x04b4,
  DATA_FIELD_BLOOD_PRESSURE = 0x04b5,
  DATA_FIELD_BLOOD_PRESSURE_DIASTOLIC = 0x04b6,
  DATA_FIELD_BLOOD_PRESSURE_SYSTOLIC = 0x04b7,
  DATA_FIELD_HEART_RATE = 0x04b8,
  DATA_FIELD_RESTING_HEART_RATE = 0x04b9,
  DATA_FIELD_HEARTBEAT_INTERVAL = 0x04ba,
  DATA_FIELD_RESPIRATORY_RATE = 0x04bb,
  DATA_FIELD_SPO2 = 0x04bc,
  DATA_FIELD_HUMAN_ATTENTION_DETECTED = 0x04bd,
  DATA_FIELD_HUMAN_HEAD_AZIMUTH = 0x04be,
  DATA_FIELD_HUMAN_HEAD_ALTITUDE = 0x04bf,
  DATA_FIELD_HUMAN_HEAD_ROLL = 0x04c0,
  DATA_FIELD_HUMAN_HEAD_PITCH = 0x04c1,
  DATA_FIELD_HUMAN_HEAD_YAW = 0x04c2,
  DATA_FIELD_HUMAN_CORRELATION_ID = 0x04c3,
  DATA_FIELD_LIGHT = 0x04d0,
  DATA_FIELD_ILLUMINANCE = 0x04d1,
  DATA_FIELD_COLOR_TEMPERATURE = 0x04d2,
  DATA_FIELD_CHROMATICITY = 0x04d3,
  DATA_FIELD_CHROMATICITY_X = 0x04d4,
  DATA_FIELD_CHROMATICITY_Y = 0x04d5,
  DATA_FIELD_CONSUMER_IR_SENTENCE_RECEIVE = 0x04d6,
  DATA_FIELD_INFRARED_LIGHT = 0x04d7,
  DATA_FIELD_RED_LIGHT = 0x04d8,
  DATA_FIELD_GREEN_LIGHT = 0x04d9,
  DATA_FIELD_BLUE_LIGHT = 0x04da,
  DATA_FIELD_ULTRAVIOLET_A_LIGHT = 0x04db,
  DATA_FIELD_ULTRAVIOLET_B_LIGHT = 0x04dc,
  DATA_FIELD_ULTRAVIOLET_INDEX = 0x04dd,
  DATA_FIELD_NEAR_INFRARED_LIGHT = 0x04de,
  PROPERTY_LIGHT = 0x04df,
  PROPERTY_CONSUMER_IR_SENTENCE_SEND = 0x04e0,
  PROPERTY_AUTO_BRIGHTNESS_PREFERRED = 0x04e2,
  PROPERTY_AUTO_COLOR_PREFERRED = 0x04e3,
  DATA_FIELD_SCANNER = 0x04f0,
  DATA_FIELD_RFID_TAG_40_BIT = 0x04f1,
  DATA_FIELD_NFC_SENTENCE_RECEIVE = 0x04f2,
  PROPERTY_SCANNER = 0x04f8,
  PROPERTY_NFC_SENTENCE_SEND = 0x04f9,
  DATA_FIELD_ELECTRICAL = 0x0500,
  DATA_FIELD_CAPACITANCE = 0x0501,
  DATA_FIELD_CURRENT = 0x0502,
  DATA_FIELD_ELECTRICAL_POWER = 0x0503,
  DATA_FIELD_INDUCTANCE = 0x0504,
  DATA_FIELD_RESISTANCE = 0x0505,
  DATA_FIELD_VOLTAGE = 0x0506,
  DATA_FIELD_FREQUENCY = 0x0507,
  DATA_FIELD_PERIOD = 0x0508,
  DATA_FIELD_PERCENT_OF_RANGE = 0x0509,
  DATA_FIELD_TIME = 0x0520,
  DATA_FIELD_YEAR = 0x0521,
  DATA_FIELD_MONTH = 0x0522,
  DATA_FIELD_DAY = 0x0523,
  DATA_FIELD_DAY_OF_WEEK = 0x0524,
  DATA_FIELD_HOUR = 0x0525,
  DATA_FIELD_MINUTE = 0x0526,
  DATA_FIELD_SECOND = 0x0527,
  DATA_FIELD_MILLISECOND = 0x0528,
  DATA_FIELD_TIMESTAMP = 0x0529,
  DATA_FIELD_JULIAN_DAY_OF_YEAR = 0x052a,
  DATA_FIELD_TIME_SINCE_SYSTEM_BOOT = 0x052b,
  PROPERTY_TIME = 0x0530,
  PROPERTY_TIME_ZONE_OFFSET_FROM_UTC = 0x0531,
  PROPERTY_TIME_ZONE_NAME = 0x0532,
  PROPERTY_DAYLIGHT_SAVINGS_TIME_OBSERVED = 0x0533,
  PROPERTY_TIME_TRIM_ADJUSTMENT = 0x0534,
  PROPERTY_ARM_ALARM = 0x0535,
  DATA_FIELD_CUSTOM = 0x0540,
  DATA_FIELD_CUSTOM_USAGE = 0x0541,
  DATA_FIELD_CUSTOM_BOOLEAN_ARRAY = 0x0542,
  DATA_FIELD_CUSTOM_VALUE = 0x0543,
  DATA_FIELD_CUSTOM_VALUE_1 = 0x0544,
  DATA_FIELD_CUSTOM_VALUE_2 = 0x0545,
  DATA_FIELD_CUSTOM_VALUE_3 = 0x0546,
  DATA_FIELD_CUSTOM_VALUE_4 = 0x0547,
  DATA_FIELD_CUSTOM_VALUE_5 = 0x0548,
  DATA_FIELD_CUSTOM_VALUE_6 = 0x0549,
  DATA_FIELD_CUSTOM_VALUE_7 = 0x054a,
  DATA_FIELD_CUSTOM_VALUE_8 = 0x054b,
  DATA_FIELD_CUSTOM_VALUE_9 = 0x054c,
  DATA_FIELD_CUSTOM_VALUE_10 = 0x054d,
  DATA_FIELD_CUSTOM_VALUE_11 = 0x054e,
  DATA_FIELD_CUSTOM_VALUE_12 = 0x054f,
  DATA_FIELD_CUSTOM_VALUE_13 = 0x0550,
  DATA_FIELD_CUSTOM_VALUE_14 = 0x0551,
  DATA_FIELD_CUSTOM_VALUE_15 = 0x0552,
  DATA_FIELD_CUSTOM_VALUE_16 = 0x0553,
  DATA_FIELD_CUSTOM_VALUE_17 = 0x0554,
  DATA_FIELD_CUSTOM_VALUE_18 = 0x0555,
  DATA_FIELD_CUSTOM_VALUE_19 = 0x0556,
  DATA_FIELD_CUSTOM_VALUE_20 = 0x0557,
  DATA_FIELD_CUSTOM_VALUE_21 = 0x0558,
  DATA_FIELD_CUSTOM_VALUE_22 = 0x0559,
  DATA_FIELD_CUSTOM_VALUE_23 = 0x055a,
  DATA_FIELD_CUSTOM_VALUE_24 = 0x055b,
  DATA_FIELD_CUSTOM_VALUE_25 = 0x055c,
  DATA_FIELD_CUSTOM_VALUE_26 = 0x055d,
  DATA_FIELD_CUSTOM_VALUE_27 = 0x055e,
  DATA_FIELD_CUSTOM_VALUE_28 = 0x055f,
  DATA_FIELD_GENERIC = 0x0560,
  DATA_FIELD_GENERIC_GUID_OR_PROPERTYKEY = 0x0561,
  DATA_FIELD_GENERIC_CATEGORY_GUID = 0x0562,
  DATA_FIELD_GENERIC_TYPE_GUID = 0x0563,
  DATA_FIELD_GENERIC_EVENT_PROPERTYKEY = 0x0564,
  DATA_FIELD_GENERIC_PROPERTY_PROPERTYKEY = 0x0565,
  DATA_FIELD_GENERIC_DATA_FIELD_PROPERTYKEY = 0x0566,
  DATA_FIELD_GENERIC_EVENT = 0x0567,
  DATA_FIELD_GENERIC_PROPERTY = 0x0568,
  DATA_FIELD_GENERIC_DATA_FIELD = 0x0569,
  DATA_FIELD_ENUMERATOR_TABLE_ROW_INDEX = 0x056a,
  DATA_FIELD_ENUMERATOR_TABLE_ROW_COUNT = 0x056b,
  DATA_FIELD_GENERIC_GUID_OR_PROPERTYKEY_KIND = 0x056c,
  DATA_FIELD_GENERIC_GUID = 0x056d,
  DATA_FIELD_GENERIC_PROPERTYKEY = 0x056e,
  DATA_FIELD_GENERIC_TOP_LEVEL_COLLECTION_ID = 0x056f,
  DATA_FIELD_GENERIC_REPORT_ID = 0x0570,
  DATA_FIELD_GENERIC_REPORT_ITEM_POSITION_INDEX = 0x0571,
  DATA_FIELD_GENERIC_FIRMWARE_VARTYPE = 0x0572,
  DATA_FIELD_GENERIC_UNIT_OF_MEASURE = 0x0573,
  DATA_FIELD_GENERIC_UNIT_EXPONENT = 0x0574,
  DATA_FIELD_GENERIC_REPORT_SIZE = 0x0575,
  DATA_FIELD_GENERIC_REPORT_COUNT = 0x0576,
  PROPERTY_GENERIC = 0x0580,
  PROPERTY_ENUMERATOR_TABLE_ROW_INDEX = 0x0581,
  PROPERTY_ENUMERATOR_TABLE_ROW_COUNT = 0x0582,
  DATA_FIELD_PERSONAL_ACTIVITY = 0x0590,
  DATA_FIELD_ACTIVITY_TYPE = 0x0591,
  DATA_FIELD_ACTIVITY_STATE = 0x0592,
  DATA_FIELD_DEVICE_POSITION = 0x0593,
  DATA_FIELD_STEP_COUNT = 0x0594,
  DATA_FIELD_STEP_COUNT_RESET = 0x0595,
  DATA_FIELD_STEP_DURATION = 0x0596,
  DATA_FIELD_STEP_TYPE = 0x0597,
  PROPERTY_MINIMUM_ACTIVITY_DETECTION_INTERVAL = 0x05a0,
  PROPERTY_SUPPORTED_ACTIVITY_TYPES = 0x05a1,
  PROPERTY_SUBSCRIBED_ACTIVITY_TYPES = 0x05a2,
  PROPERTY_SUPPORTED_STEP_TYPES = 0x05a3,
  PROPERTY_SUBSCRIBED_STEP_TYPES = 0x05a4,
  PROPERTY_FLOOR_HEIGHT = 0x05a5,
  DATA_FIELD_CUSTOM_TYPE_ID = 0x05b0,
  PROPERTY_CUSTOM = 0x05c0,
  PROPERTY_CUSTOM_VALUE_1 = 0x05c1,
  PROPERTY_CUSTOM_VALUE_2 = 0x05c2,
  PROPERTY_CUSTOM_VALUE_3 = 0x05c3,
  PROPERTY_CUSTOM_VALUE_4 = 0x05c4,
  PROPERTY_CUSTOM_VALUE_5 = 0x05c5,
  PROPERTY_CUSTOM_VALUE_6 = 0x05c6,
  PROPERTY_CUSTOM_VALUE_7 = 0x05c7,
  PROPERTY_CUSTOM_VALUE_8 = 0x05c8,
  PROPERTY_CUSTOM_VALUE_9 = 0x05c9,
  PROPERTY_CUSTOM_VALUE_10 = 0x05ca,
  PROPERTY_CUSTOM_VALUE_11 = 0x05cb,
  PROPERTY_CUSTOM_VALUE_12 = 0x05cc,
  PROPERTY_CUSTOM_VALUE_13 = 0x05cd,
  PROPERTY_CUSTOM_VALUE_14 = 0x05ce,
  PROPERTY_CUSTOM_VALUE_15 = 0x05cf,
  PROPERTY_CUSTOM_VALUE_16 = 0x05d0,
  DATA_FIELD_HINGE = 0x05e0,
  DATA_FIELD_HINGE_ANGLE = 0x05e1,
  DATA_FIELD_GESTURE_SENSOR = 0x05f0,
  DATA_FIELD_GESTURE_STATE = 0x05f1,
  DATA_FIELD_HINGE_FOLD_INITIAL_ANGLE = 0x05f2,
  DATA_FIELD_HINGE_FOLD_FINAL_ANGLE = 0x05f3,
  DATA_FIELD_HINGE_FOLD_CONTRIBUTING_PANEL = 0x05f4,
  DATA_FIELD_HINGE_FOLD_TYPE = 0x05f5,
  SENSOR_STATE_UNDEFINED = 0x0800,
  SENSOR_STATE_READY = 0x0801,
  SENSOR_STATE_NOT_AVAILABLE = 0x0802,
  SENSOR_STATE_NO_DATA = 0x0803,
  SENSOR_STATE_INITIALIZING = 0x0804,
  SENSOR_STATE_ACCESS_DENIED = 0x0805,
  SENSOR_STATE_ERROR = 0x0806,
  SENSOR_EVENT_UNKNOWN = 0x0810,
  SENSOR_EVENT_STATE_CHANGED = 0x0811,
  SENSOR_EVENT_PROPERTY_CHANGED = 0x0812,
  SENSOR_EVENT_DATA_UPDATED = 0x0813,
  SENSOR_EVENT_POLL_RESPONSE = 0x0814,
  SENSOR_EVENT_CHANGE_SENSITIVITY = 0x0815,
  SENSOR_EVENT_RANGE_MAXIMUM_REACHED = 0x0816,
  SENSOR_EVENT_RANGE_MINIMUM_REACHED = 0x0817,
  SENSOR_EVENT_HIGH_THRESHOLD_CROSS_UPWARD = 0x0818,
  SENSOR_EVENT_HIGH_THRESHOLD_CROSS_DOWNWARD = 0x0819,
  SENSOR_EVENT_LOW_THRESHOLD_CROSS_UPWARD = 0x081a,
  SENSOR_EVENT_LOW_THRESHOLD_CROSS_DOWNWARD = 0x081b,
  SENSOR_EVENT_ZERO_THRESHOLD_CROSS_UPWARD = 0x081c,
  SENSOR_EVENT_ZERO_THRESHOLD_CROSS_DOWNWARD = 0x081d,
  SENSOR_EVENT_PERIOD_EXCEEDED = 0x081e,
  SENSOR_EVENT_FREQUENCY_EXCEEDED = 0x081f,
  SENSOR_EVENT_COMPLEX_TRIGGER = 0x0820,
  CONNECTION_TYPE_PC_INTEGRATED = 0x0830,
  CONNECTION_TYPE_PC_ATTACHED = 0x0831,
  CONNECTION_TYPE_PC_EXTERNAL = 0x0832,
  REPORTING_STATE_REPORT_NO_EVENTS = 0x0840,
  REPORTING_STATE_REPORT_ALL_EVENTS = 0x0841,
  REPORTING_STATE_REPORT_THRESHOLD_EVENTS = 0x0842,
  REPORTING_STATE_WAKE_ON_NO_EVENTS = 0x0843,
  REPORTING_STATE_WAKE_ON_ALL_EVENTS = 0x0844,
  REPORTING_STATE_WAKE_ON_THRESHOLD_EVENTS = 0x0845,
  REPORTING_STATE_ANYTIME = 0x0846,
  POWER_STATE_UNDEFINED = 0x0850,
  POWER_STATE_D0_FULL_POWER = 0x0851,
  POWER_STATE_D1_LOW_POWER = 0x0852,
  POWER_STATE_D2_STANDBY_POWER_WITH_WAKEUP = 0x0853,
  POWER_STATE_D3_SLEEP_WITH_WAKEUP = 0x0854,
  POWER_STATE_D4_POWER_OFF = 0x0855,
  ACCURACY_DEFAULT = 0x0860,
  ACCURACY_HIGH = 0x0861,
  ACCURACY_MEDIUM = 0x0862,
  ACCURACY_LOW = 0x0863,
  FIX_QUALITY_NO_FIX = 0x0870,
  FIX_QUALITY_GPS = 0x0871,
  FIX_QUALITY_DGPS = 0x0872,
  FIX_TYPE_NO_FIX = 0x0880,
  FIX_TYPE_GPS_SPS_MODE_FIX_VALID = 0x0881,
  FIX_TYPE_DGPS_SPS_MODE_FIX_VALID = 0x0882,
  FIX_TYPE_GPS_PPS_MODE_FIX_VALID = 0x0883,
  FIX_TYPE_REAL_TIME_KINEMATIC = 0x0884,
  FIX_TYPE_FLOAT_RTK = 0x0885,
  FIX_TYPE_ESTIMATED_DEAD_RECKONED = 0x0886,
  FIX_TYPE_MANUAL_INPUT_MODE = 0x0887,
  FIX_TYPE_SIMULATOR_MODE = 0x0888,
  GPS_OPERATION_MODE_MANUAL = 0x0890,
  GPS_OPERATION_MODE_AUTOMATIC = 0x0891,
  GPS_SELECTION_MODE_AUTONOMOUS = 0x08a0,
  GPS_SELECTION_MODE_DGPS = 0x08a1,
  GPS_SELECTION_MODE_ESTIMATED_DEAD_RECKONED = 0x08a2,
  GPS_SELECTION_MODE_MANUAL_INPUT = 0x08a3,
  GPS_SELECTION_MODE_SIMULATOR = 0x08a4,
  GPS_SELECTION_MODE_DATA_NOT_VALID = 0x08a5,
  GPS_STATUS_DATA_VALID = 0x08b0,
  GPS_STATUS_DATA_NOT_VALID = 0x08b1,
  DAY_OF_WEEK_SUNDAY = 0x08c0,
  DAY_OF_WEEK_MONDAY = 0x08c1,
  DAY_OF_WEEK_TUESDAY = 0x08c2,
  DAY_OF_WEEK_WEDNESDAY = 0x08c3,
  DAY_OF_WEEK_THURSDAY = 0x08c4,
  DAY_OF_WEEK_FRIDAY = 0x08c5,
  DAY_OF_WEEK_SATURDAY = 0x08c6,
  KIND_CATEGORY = 0x08d0,
  KIND_TYPE = 0x08d1,
  KIND_EVENT = 0x08d2,
  KIND_PROPERTY = 0x08d3,
  KIND_DATA_FIELD = 0x08d4,
  MAGNETOMETER_ACCURACY_LOW = 0x08e0,
  MAGNETOMETER_ACCURACY_MEDIUM = 0x08e1,
  MAGNETOMETER_ACCURACY_HIGH = 0x08e2,
  SIMPLE_ORIENTATION_DIRECTION_NOT_ROTATED = 0x08f0,
  SIMPLE_ORIENTATION_DIRECTION_ROTATED_90_DEGREES_CCW = 0x08f1,
  SIMPLE_ORIENTATION_DIRECTION_ROTATED_180_DEGREES_CCW = 0x08f2,
  SIMPLE_ORIENTATION_DIRECTION_ROTATED_270_DEGREES_CCW = 0x08f3,
  SIMPLE_ORIENTATION_DIRECTION_FACE_UP = 0x08f4,
  SIMPLE_ORIENTATION_DIRECTION_FACE_DOWN = 0x08f5,
  VT_NULL_EMPTY = 0x0900,
  VT_BOOL_BOOLEAN = 0x0901,
  VT_UI1_BYTE = 0x0902,
  VT_I1_CHARACTER = 0x0903,
  VT_UI2_UNSIGNED_SHORT = 0x0904,
  VT_I2_SHORT = 0x0905,
  VT_UI4_UNSIGNED_LONG = 0x0906,
  VT_I4_LONG = 0x0907,
  VT_UI8_UNSIGNED_LONG_LONG = 0x0908,
  VT_I8_LONG_LONG = 0x0909,
  VT_R4_FLOAT = 0x090a,
  VT_R8_DOUBLE = 0x090b,
  VT_WSTR_WIDE_STRING = 0x090c,
  VT_STR_NARROW_STRING = 0x090d,
  VT_CLSID_GUID = 0x090e,
  VT_VECTOR_VT_UI1_OPAQUE_STRUCTURE = 0x090f,
  VT_F16E0_HID_16_BIT_FLOAT_E0 = 0x0910,
  VT_F16E1_HID_16_BIT_FLOAT_E1 = 0x0911,
  VT_F16E2_HID_16_BIT_FLOAT_E2 = 0x0912,
  VT_F16E3_HID_16_BIT_FLOAT_E3 = 0x0913,
  VT_F16E4_HID_16_BIT_FLOAT_E4 = 0x0914,
  VT_F16E5_HID_16_BIT_FLOAT_E5 = 0x0915,
  VT_F16E6_HID_16_BIT_FLOAT_E6 = 0x0916,
  VT_F16E7_HID_16_BIT_FLOAT_E7 = 0x0917,
  VT_F16E8_HID_16_BIT_FLOAT_E_8 = 0x0918,
  VT_F16E9_HID_16_BIT_FLOAT_E_7 = 0x0919,
  VT_F16EA_HID_16_BIT_FLOAT_E_6 = 0x091a,
  VT_F16EB_HID_16_BIT_FLOAT_E_5 = 0x091b,
  VT_F16EC_HID_16_BIT_FLOAT_E_4 = 0x091c,
  VT_F16ED_HID_16_BIT_FLOAT_E_3 = 0x091d,
  VT_F16EE_HID_16_BIT_FLOAT_E_2 = 0x091e,
  VT_F16EF_HID_16_BIT_FLOAT_E_1 = 0x091f,
  VT_F32E0_HID_32_BIT_FLOAT_E0 = 0x0920,
  VT_F32E1_HID_32_BIT_FLOAT_E1 = 0x0921,
  VT_F32E2_HID_32_BIT_FLOAT_E2 = 0x0922,
  VT_F32E3_HID_32_BIT_FLOAT_E3 = 0x0923,
  VT_F32E4_HID_32_BIT_FLOAT_E4 = 0x0924,
  VT_F32E5_HID_32_BIT_FLOAT_E5 = 0x0925,
  VT_F32E6_HID_32_BIT_FLOAT_E6 = 0x0926,
  VT_F32E7_HID_32_BIT_FLOAT_E7 = 0x0927,
  VT_F32E8_HID_32_BIT_FLOAT_E_8 = 0x0928,
  VT_F32E9_HID_32_BIT_FLOAT_E_7 = 0x0929,
  VT_F32EA_HID_32_BIT_FLOAT_E_6 = 0x092a,
  VT_F32EB_HID_32_BIT_FLOAT_E_5 = 0x092b,
  VT_F32EC_HID_32_BIT_FLOAT_E_4 = 0x092c,
  VT_F32ED_HID_32_BIT_FLOAT_E_3 = 0x092d,
  VT_F32EE_HID_32_BIT_FLOAT_E_2 = 0x092e,
  VT_F32EF_HID_32_BIT_FLOAT_E_1 = 0x092f,
  ACTIVITY_TYPE_UNKNOWN = 0x0930,
  ACTIVITY_TYPE_STATIONARY = 0x0931,
  ACTIVITY_TYPE_FIDGETING = 0x0932,
  ACTIVITY_TYPE_WALKING = 0x0933,
  ACTIVITY_TYPE_RUNNING = 0x0934,
  ACTIVITY_TYPE_IN_VEHICLE = 0x0935,
  ACTIVITY_TYPE_BIKING = 0x0936,
  ACTIVITY_TYPE_IDLE = 0x0937,
  UNIT_NOT_SPECIFIED = 0x0940,
  UNIT_LUX = 0x0941,
  UNIT_DEGREES_KELVIN = 0x0942,
  UNIT_DEGREES_CELSIUS = 0x0943,
  UNIT_PASCAL = 0x0944,
  UNIT_NEWTON = 0x0945,
  UNIT_METERS_SECOND = 0x0946,
  UNIT_KILOGRAM = 0x0947,
  UNIT_METER = 0x0948,
  UNIT_METERS_SECOND_SECOND = 0x0949,
  UNIT_FARAD = 0x094a,
  UNIT_AMPERE = 0x094b,
  UNIT_WATT = 0x094c,
  UNIT_HENRY = 0x094d,
  UNIT_OHM = 0x094e,
  UNIT_VOLT = 0x094f,
  UNIT_HERTZ = 0x0950,
  UNIT_BAR = 0x0951,
  UNIT_DEGREES_ANTI_CLOCKWISE = 0x0952,
  UNIT_DEGREES_CLOCKWISE = 0x0953,
  UNIT_DEGREES = 0x0954,
  UNIT_DEGREES_SECOND = 0x0955,
  UNIT_DEGREES_SECOND_SECOND = 0x0956,
  UNIT_KNOT = 0x0957,
  UNIT_PERCENT = 0x0958,
  UNIT_SECOND = 0x0959,
  UNIT_MILLISECOND = 0x095a,
  UNIT_G = 0x095b,
  UNIT_BYTES = 0x095c,
  UNIT_MILLIGAUSS = 0x095d,
  UNIT_BITS = 0x095e,
  ACTIVITY_STATE_NO_STATE_CHANGE = 0x0960,
  ACTIVITY_STATE_START_ACTIVITY = 0x0961,
  ACTIVITY_STATE_END_ACTIVITY = 0x0962,
  EXPONENT_0_E0 = 0x0970,
  EXPONENT_1_E1 = 0x0971,
  EXPONENT_2_E2 = 0x0972,
  EXPONENT_3_E3 = 0x0973,
  EXPONENT_4_E4 = 0x0974,
  EXPONENT_5_E5 = 0x0975,
  EXPONENT_6_E6 = 0x0976,
  EXPONENT_7_E7 = 0x0977,
  EXPONENT_8_E_8 = 0x0978,
  EXPONENT_9_E_7 = 0x0979,
  EXPONENT_A_E_6 = 0x097a,
  EXPONENT_B_E_5 = 0x097b,
  EXPONENT_C_E_4 = 0x097c,
  EXPONENT_D_E_3 = 0x097d,
  EXPONENT_E_E_2 = 0x097e,
  EXPONENT_F_E_1 = 0x097f,
  DEVICE_POSITION_UNKNOWN = 0x0980,
  DEVICE_POSITION_UNCHANGED = 0x0981,
  DEVICE_POSITION_ON_DESK = 0x0982,
  DEVICE_POSITION_IN_HAND = 0x0983,
  DEVICE_POSITION_MOVING_IN_BAG = 0x0984,
  DEVICE_POSITION_STATIONARY_IN_BAG = 0x0985,
  STEP_TYPE_UNKNOWN = 0x0990,
  STEP_TYPE_WALKING = 0x0991,
  STEP_TYPE_RUNNING = 0x0992,
  GESTURE_STATE_UNKNOWN = 0x09a0,
  GESTURE_STATE_STARTED = 0x09a1,
  GESTURE_STATE_COMPLETED = 0x09a2,
  GESTURE_STATE_CANCELLED = 0x09a3,
  HINGE_FOLD_CONTRIBUTING_PANEL_UNKNOWN = 0x09b0,
  HINGE_FOLD_CONTRIBUTING_PANEL_PANEL_1 = 0x09b1,
  HINGE_FOLD_CONTRIBUTING_PANEL_PANEL_2 = 0x09b2,
  HINGE_FOLD_CONTRIBUTING_PANEL_BOTH = 0x09b3,
  HINGE_FOLD_TYPE_UNKNOWN = 0x09b4,
  HINGE_FOLD_TYPE_INCREASING = 0x09b5,
  HINGE_FOLD_TYPE_DECREASING = 0x09b6,
  HUMAN_PRESENCE_DETECTION_TYPE_VENDOR_DEFINED_NON_BIOMETRIC = 0x09c0,
  HUMAN_PRESENCE_DETECTION_TYPE_VENDOR_DEFINED_BIOMETRIC = 0x09c1,
  HUMAN_PRESENCE_DETECTION_TYPE_FACIAL_BIOMETRIC = 0x09c2,
  HUMAN_PRESENCE_DETECTION_TYPE_AUDIO_BIOMETRIC = 0x09c3,
  CHANGE_SENSITIVITY_ABSOLUTE = 0x1000,
  MAXIMUM = 0x2000,
  MINIMUM = 0x3000,
  ACCURACY = 0x4000,
  RESOLUTION = 0x5000,
  THRESHOLD_HIGH = 0x6000,
  THRESHOLD_LOW = 0x7000,
  CALIBRATION_OFFSET = 0x8000,
  CALIBRATION_MULTIPLIER = 0x9000,
  REPORT_INTERVAL = 0xa000,
  FREQUENCY_MAX = 0xb000,
  PERIOD_MAX = 0xc000,
  CHANGE_SENSITIVITY_PERCENT_OF_RANGE = 0xd000,
  CHANGE_SENSITIVITY_PERCENT_RELATIVE = 0xe000,
  VENDOR_RESERVED = 0xf000,
};
} // namespace hid::page

#endif // __HID_PAGE_SENSOR_HPP_
