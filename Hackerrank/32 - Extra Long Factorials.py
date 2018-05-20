#!/bin/python3

import sys
def factorial(n):
    if n < 1:
        return(1)
    else:
        val = n*factorial(n-1)
        return(val)
    

n = int(input().strip())
result = factorial(n)
print(result)