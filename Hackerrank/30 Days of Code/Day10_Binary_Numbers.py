#!/bin/python3

import sys


n = int(input().strip())

contOnes = 0
maxOnes = 0

while(n > 0):
    if(n%2 == 1):
        contOnes += 1
    else:
        contOnes = 0
        
    if(maxOnes < contOnes):
        maxOnes = contOnes
    
    n = int(n/2)

print(maxOnes)