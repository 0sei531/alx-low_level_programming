#!/bin/bash
wget -P .. https://raw.githubusercontent.com/0sei531/alx-low_level_programming/master/0x18-dynamic_libraries/libtry.so
export LD_PRELOAD="$PWD/../libtry.so"
