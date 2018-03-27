def FirstFactorial(num): 

    n = 1
    # code goes here 
    for i in range(1, num+1):
        n = n * i 
    
    num = n
    return num
    
# keep this function call here  
print FirstFactorial(raw_input())