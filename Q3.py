from math import *

# I need to use the floor function in case the palindrome has odd number of digits
x=input("Enter a number to check: ")
# taking input
string_to_list=[]
copy_list=[]
# initialising empty list to fill up with elements 
for element in x:
    string_to_list.append(int(element))
    #appending all elements to the list makes it[0,0,0,0,1,2,2,1]
first_nonzero=bool(False)
    #setting to false
first_nonzero_index=0;
# intialising randomly the index checker
for element in string_to_list:
    if element!=0:
        first_nonzero=True
        copy_list.append(element)
    if element==0:
        if (first_nonzero==True):
            copy_list.append(element)
#probably some error due to reading and removing from the same list
#maybe copy will work

length=len(copy_list)
# storing the length of list in a separate variable
is_Palindrome=bool(True)
for index in range(0,floor(length/2)):
    if copy_list[index]==copy_list[-index-1]:
        continue
    else:
        is_Palindrome=False
        break
# for loop compares the equidistant elements at either ends 
# and breaks even if one fails   
print(is_Palindrome)    
# prints whether it is a palindrome or not