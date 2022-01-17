#!/bin/sh

ls /tmp/core-*

gdb -c /tmp/core-* test_g
