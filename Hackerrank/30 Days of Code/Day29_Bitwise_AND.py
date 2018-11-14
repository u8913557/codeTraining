#!/bin/python3

import math
import os
import random
import re
import sys

if __name__ == '__main__':
    t = int(input())

    for t_itr in range(t):
        nk = input().split()

        n = int(nk[0])

        k = int(nk[1])
        
        print(k-1 if ((k-1) | k) <= n else k-2)
    
    if 0:
	# my code cannot pass all test cases (timeout)
        max=0
       
        for i in range(1, n):
            for j in range(i+1, n+1):
                temp = i&j
                if(temp < k and temp > max):
                    max = temp

        print(str(max))
