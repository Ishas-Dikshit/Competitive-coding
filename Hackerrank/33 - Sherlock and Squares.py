import sys
import math

q = input().strip()
q = int(q)

for i in range(q):
    a,b = input().strip().split(' ')
    a,b = [int(a),int(b)]
    c = math.ceil(a**(1/2))
    d = math.floor(b**(1/2))
    
    e = d-c+1
        
    print(e)