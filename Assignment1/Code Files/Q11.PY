from math import *
x=input("Enter a string: ")
list_out=[]
index=0
length=len(x)
for integer in range(0,floor(len(x)/2)):
    index=2*integer+1
    list_out.append(x[index])
output=''.join(list_out)
print(output)    