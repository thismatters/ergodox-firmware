#!/bin/bash

teensy_loader_cli --mcu=atmega32u4 -w src/firmware.eep
teensy_loader_cli --mcu=atmega32u4 -w src/firmware.hex

