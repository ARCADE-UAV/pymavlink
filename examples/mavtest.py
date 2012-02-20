#!/usr/bin/env python

import sys, os

# allow import from the parent directory, where mavlink.py is
sys.path.insert(0, os.path.join(os.path.dirname(os.path.realpath(__file__)), '..'))

import mavlink

class fifo(object):
    def __init__(self):
        self.buf = []
    def write(self, data):
        self.buf += data
        return len(data)
    def read(self):
        return self.buf.pop(0)

f = fifo()

# create a mavlink instance, which will do IO on file object 'f'
mav = mavlink.MAVLink(f)

for _ in range(0, 1000000):
    m = mav.param_set_encode(7, 1, "WP_RADIUS", 101)
