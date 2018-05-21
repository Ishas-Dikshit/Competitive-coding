#!/bin/python3

import sys
def count(s,n):
    g= len(s)
    b = n//g
    c = n % g
    d = s.count('a')
    z = d*b
    s = s[:c]
    e = s.count('a')
    return (z+e)

s = input().strip()
n = int(input().strip())
result = count(s,n)
print(result)