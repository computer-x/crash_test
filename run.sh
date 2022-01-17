#!/bin/sh

# need process with root


ulimit -c unlimited
echo "/tmp/core-%e-%s-%p" > /proc/sys/kernel/core_pattern

./test_g


