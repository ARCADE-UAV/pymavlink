#!/bin/sh

swig -python mavlink_crc.i && gcc -O3 -fPIC -shared `pkg-config python --cflags` mavlink_crc_wrap.c mavlink_crc.c -o _mavlink_crc.so
