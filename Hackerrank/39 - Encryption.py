#!/bin/python3

import sys
import math
k = []
s = input().strip()
l = len(s)
m = math.floor(l**(1/2))
n = math.ceil(l**(1/2))

i = 0
for i in range(0,n):
    while i <= len(s)-1: 
        print(s[i],end='')
        i = (i + n)
    print(end = ' ')
