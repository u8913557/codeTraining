#!/bin/python3

import os
import sys

#
# Complete the simpleArraySum function below.
#
def simpleArraySum(n, ar):
    #
    # Write your code here.
    #
    
    return sum(ar)


if __name__ == '__main__':
    f = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    ar = list(map(int, input().rstrip().split()))

    result = simpleArraySum(n, ar)

    f.write(str(result) + '\n')

    f.close()
