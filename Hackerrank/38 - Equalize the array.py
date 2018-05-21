import sys


n = int(input().strip())
arr = [int(arr_temp) for arr_temp in input().strip().split(' ')]
max = arr.count(arr[0])
for i in range(1,len(arr)):
    if arr.count(arr[i]) > max:
        max = arr.count(arr[i])
d = len(arr) - max
print(d)