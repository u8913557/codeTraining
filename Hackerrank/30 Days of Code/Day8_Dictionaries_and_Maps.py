
n = int(input())
phoneBook ={}

for i in range(n):
    strInput = input()
    listInput = strInput.split()
    phoneBook[listInput[0]] = int(listInput[1])
    
for j in range(n):
    query = input()
    if(phoneBook.get(str(query))):
        print("{0}={1}".format(query, phoneBook[query]))        
    else :
        print("Not found")
        