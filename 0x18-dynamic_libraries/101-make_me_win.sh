#!/bin/bash
wget -P /tmp/ https://raw.github.com/analyticdav/low_level_programming/master/0x18-dynamic_libraries/inject.so
export LD_PRELOAD=/tmp/inject.so
