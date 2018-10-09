
import math

number = input()

for i in range(int(number)):
    str_num = input()
    int_num = int(str_num)
    
    if(int_num==1):
        print("Not prime")
    else:
        k = 2
        for j in range(2, int(math.sqrt(int_num))+1):
            if(int_num%k==0):
                break
            k = k + 1

        if(k<=math.sqrt(int_num)):
            print("Not prime")
        else:
            print("Prime")
        