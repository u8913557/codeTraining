#!/bin/python3

import os
import sys

#
# Complete the diagonalDifference function below.
#
def diagonalDifference(a):
    #
    # Write your code here.
    #
    
    #n = int(input())
    total1 = 0
    total2 = 0
        
    for i in range(n):
        total1 += a[i][i]
        total2 += a[i][n-i-1]
        
    return abs(total1 - total2)

if __name__ == '__main__':
    f = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    a = []

    for _ in range(n):
        a.append(list(map(int, input().rstrip().split())))

    result = diagonalDifference(a)

    f.write(str(result) + '\n')

    f.close()
