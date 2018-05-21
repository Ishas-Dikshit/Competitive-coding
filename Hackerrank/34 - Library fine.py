#!/bin/python3

import sys
def fine(d1,m1,y1,d2,m2,y2):
    if y1 - y2>0:
        return 10000
    elif y1 - y2<0:
        return 0
    elif m1 - m2 > 0:
        return (m1-m2)*500
    elif d1 -d2>0 and m1 - m2 == 0:
        if y1-y2 == 0:
            return (d1-d2)*15
   
    else:
        return 0

d1,m1,y1 = input().strip().split(' ')
d1,m1,y1 = [int(d1),int(m1),int(y1)]
d2,m2,y2 = input().strip().split(' ')
d2,m2,y2 = [int(d2),int(m2),int(y2)]
result = fine(d1,m1,y1,d2,m2,y2)
print(result)