#!/bin/python3

import sys


t = int(input().strip())
for a0 in range(t):
    n,c,m = input().strip().split(' ')
    n,c,m = [int(n),int(c),int(m)]
    h = n//c
    t = n//c
    while h >= m:
        h = h - m
        t = t + 1
        h=h+1
    print(t) 