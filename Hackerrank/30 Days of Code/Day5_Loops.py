#!/bin/python3

import sys


n = int(input().strip())

for i in range(10):
    print('{0} x {1} = {2}'.format(n, (i+1), n*(i+1)))