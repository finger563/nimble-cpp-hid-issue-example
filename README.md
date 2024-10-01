# Example showing HID bug with esp-nimble-cpp

This repository serves as a reproducible example illustrating the bug of HID
service not working properly in
[esp-nimble-cpp](https://github.com/h2zero/esp-nimble-cpp) at commit
[758c4d0](https://github.com/h2zero/esp-nimble-cpp/commit/758c4d0471cca8a00c8652aac2e16940ecb30cb3).

## Cloning

Since this repo contains a submodule, you need to make sure you clone it
recursively, e.g. with:

``` sh
git clone --recurse-submodules https://github.com/finger563/nimble-cpp-hid-issue-example
```

Alternatively, you can always ensure the submodules are up to date after cloning
(or if you forgot to clone recursively) by running:

``` sh
git submodule update --init --recursive
```

## Build and Flash

Build the project and flash it to the board, then run monitor tool to view serial output:

```
idf.py -p PORT flash monitor
```

(Replace PORT with the name of the serial port to use.)

(To exit the serial monitor, type ``Ctrl-]``.)

See the Getting Started Guide for full steps to configure and use ESP-IDF to build projects.

## Output

Example screenshot of the console output from this app:

