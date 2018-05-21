#!/bin/python3

import sys


n = int(input().strip())
c = [int(c_temp) for c_temp in input().strip().split(' ')]
i = 0
count=0
d= len(c)
while i< d-1:
    if i == d-2:
        count+=1
        i = i+1
    elif c[i+1] == 1:
        count+=1
        i = i+2
    elif c[i+1] ==0 and c[i+2]==1:
        count+=1
        i = i+1
    elif c[i+1]==0 and c[i+2]==0:
        count+=1
        i=i+2
   
        
print(count)
        