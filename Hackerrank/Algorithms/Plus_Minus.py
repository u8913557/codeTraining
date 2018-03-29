#!/bin/python3

import os
import sys

#
# Complete the plusMinus function below.
#
def plusMinus(arr):
    #
    # Write your code here.
    #
    lenArr = len(arr)
    positiveNum=0
    negativeNum=0
    zeroNum=0
    
    if(arr !=0):
        for i in range(lenArr):
            if(arr[i] >0):
                positiveNum +=1
            elif(arr[i] <0):
                negativeNum +=1
            else:
                zeroNum +=1
    
        print("{0:.6f}".format(positiveNum/lenArr))
        print("{0:.6f}".format(negativeNum/lenArr))
        print("{0:.6f}".format(zeroNum/lenArr))

if __name__ == '__main__':
    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)
