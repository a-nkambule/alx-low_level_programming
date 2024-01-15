#!/bin/bash
wget -P .. https://raw.githubusercontent.com/a-nkambule/alx-low_level_programming/master/0x018-dynamic_libraries/libgiga.so
export LD_PRELOAD="$PWD/../libgiga.so"
