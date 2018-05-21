#!/bin/python3

import sys


n = int(input().strip())
A = [int(A_temp) for A_temp in input().strip().split(' ')]
d=[]
for i in range (0,len(A)):
    x=A[i]
    for j in range(i+1,len(A)):
        if A[j] == x:
            d.append(j-i)
    if len(d)==0:
        e=-1
    else:
        e = min(d)
print(e)
