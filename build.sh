#!/bin/bash

mkdir -p lib
if [ ! -d lib/pico-sdk ]; then
    git clone https://github.com/raspberrypi/pico-sdk lib/pico-sdk --recurse-submodules
fi

cmake -B build -S . -DPICO_SDK_PATH=lib/pico-sdk
cmake --build build
