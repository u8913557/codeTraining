def LongestWord(sen): 

    # code goes here
    import re
    # code goes here
    sen = re.sub('[^\w]', ' ', sen)

    return max(sen.split(), key=len)
    return sen
    
# keep this function call here  
print LongestWord(raw_input())