#!/bin/python

import sys

def solve(grades):
    for i in range(0,n):
        if grades[i] >= 38:
            j = grades[i] % 5
            if j > 2:
                grades[i] = grades[i] - j + 5
            
    return grades

n = int(raw_input().strip())
grades = []
grades_i = 0
for grades_i in xrange(n):
    grades_t = int(raw_input().strip())
    grades.append(grades_t)
result = solve(grades)
print "\n".join(map(str, result))
