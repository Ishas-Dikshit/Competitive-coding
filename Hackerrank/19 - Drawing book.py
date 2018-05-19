#!/bin/python3

import sys

def solve(n, p):
    if p==1 or p== n:
        return 0
    elif p> n/2 and n%2==0 and p!=n-1:
        return int((n-p)/2)
       
    elif p > n/2 and n%2==0 and p == n-1:
        return 1
    elif p > n/2 and n % 2 != 0:
        return int((n-p)/2)

    else:
        return int(p/2)

n = int(input().strip())
p = int(input().strip())
result = solve(n, p)
print(result)