#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    N = int(input())
    
    alist =[]
    
    for N_itr in range(N):
        firstNameEmailID = input().split()

        firstName = firstNameEmailID[0]

        emailID = firstNameEmailID[1]

        if(re.search(r'@gmail.com', emailID)):
            alist.append(firstName)
    
    alist.sort()
    print('\n'.join(alist))
