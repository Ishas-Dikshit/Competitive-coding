#!/bin/python3

import sys

n = int(input().strip())
arr = [int(arr_temp) for arr_temp in input().strip().split(' ')]
a=len(arr)
print(a)
while a > 0:
    mini = min(arr)
    for i in range(0,a):
        arr[i] = arr[i] - mini
    for i in range(a-1,-1,-1):
        if arr[i]==0:
            del arr[i]
    a = len(arr)
    if a>0:
        print(a)
    