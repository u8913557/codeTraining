#!/bin/python3

import sys

n = int(input().strip())
a = list(map(int, input().strip().split(' ')))
# Write Your Code Here

maxSwapNumber = 0
for i in range(n):
    swapNumber = 0
    for j in range(n-1):
        if(a[j] > a[j+1]):
            a[j], a[j+1] = a[j+1], a[j]
            swapNumber += 1
            maxSwapNumber += 1
    
    if(swapNumber==0):
        break

print("Array is sorted in {0} swaps.".format(maxSwapNumber))
print("First Element:", a[0])
print("Last Element:", a[-1])