#!/bin/sh
ls -l | awk 'NR %2 == 0'

ls -l | sed -n '0~2!p'