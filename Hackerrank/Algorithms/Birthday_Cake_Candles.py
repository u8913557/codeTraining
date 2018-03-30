#!/bin/python3

import os
import sys

#
# Complete the birthdayCakeCandles function below.
#
def birthdayCakeCandles(n, ar):
    #
    # Write your code here.
    #
    maxHeitgh=0
    count =0
    for i in range(n):
        if(maxHeitgh < ar[i]):
            maxHeitgh = ar[i]
    
    for i in range(n):
        if(maxHeitgh == ar[i]):
            count +=1
            
    return count
        
"""
    candles = {}
    for candle in ar:
        if not candle in candles:
            candles[candle] = 0
        candles[candle] += 1
        
    return candles[max(candles, key=int)]
"""
        

if __name__ == '__main__':
    f = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    ar = list(map(int, input().rstrip().split()))

    result = birthdayCakeCandles(n, ar)

    f.write(str(result) + '\n')

    f.close()
