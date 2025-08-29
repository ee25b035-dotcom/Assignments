x=input("Enter a number to check: ")
#taking an input
list_of_digits=[]
#initialising a list to store all digits

for element in x:
    list_of_digits.append(element)
x=int(x)
#converting x to an integer
divisor=int(1)
#initialising divisor as 1, later we increment it by 10 each time
quotient=1
#initialise quotient as something greater than or equal to 1
count=0
while quotient>=1:
    quotient=x/divisor
    divisor=divisor*10
    count+=1
#while loop runs until quotient becomes less than 1 
# although we can rely on list length, it will fail if person enters a number starting with zeroes
# so using while loop   
no_of_digits=count-1
#Now we have no_of_digits
print(no_of_digits)    
#now we calculate the sum
sum=0
for element in list_of_digits:
    sum=sum+(int(element)**no_of_digits)
print(sum)
#printing sum for reference
if sum==x:
    print("Yes")
else:
    print("No")        