x=int(input("Enter the first integer: "))
y=int(input("Enter second integer: "))
z=int(input("Enter the third integer: "))
if (x+y==z):
    print(1)
if (x+z==y):
    print(2)
if (x*y==z):
    print(3)
else:
    print("None possible")