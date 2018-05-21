import sys

p = (int(input().strip()))
q = (int(input().strip()))

list = []
for i in range(p,q+1):
    if i == 1:
        list.append(i)
    elif i > 3:
        j = str(i**2)
        l = len(j)
        d =l//2         
        g = int(j[:d]) + int(j[d:])
        if g == i:
            list.append(i)
if len(list) > 0:
    for i in list:
        print(i,end =' ')
else:
    print('INVALID RANGE')
        