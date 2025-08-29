x=int(input("Enter first number: "))
y=int(input("Enter second number: "))
z=int(input("Enter third number: "))
if (x-y)*(y-z)*(z-x)==0:
    print(0)
else:
    print(x+y+z)    