
str_input = input()
a_day, a_mon, a_year = str_input.split()
str_input = input()
e_day, e_mon, e_year = str_input.split()

a_day, a_mon, a_year= int(a_day), int(a_mon), int(a_year)
e_day, e_mon, e_year= int(e_day), int(e_mon), int(e_year)
fine=0

if((a_year == e_year) and (a_mon == e_mon) and (a_day<=e_day)):
    fine = 0
elif((a_year == e_year) and (a_mon == e_mon) and (a_day > e_day)):
    fine = (a_day - e_day) * 15
elif((a_year == e_year) and (a_mon > e_mon)):
    fine = (a_mon - e_mon) * 500
elif(a_year > e_year):
        fine = 10000
        
print(fine)