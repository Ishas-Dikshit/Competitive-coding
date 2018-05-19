#!/bin/python3

import sys


n = int(input().strip())
a = [int(a_temp) for a_temp in input().strip().split(' ')]
max = 0
for i in range(0,len(a)):
    x = a.count(a[i])
    y = a.count(a[i]-1)
    z = x + y
    if z > max:
        max = z
print(max)
