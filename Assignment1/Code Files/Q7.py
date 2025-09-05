y=input("Enter a string: ")
def no_of_vowels(x):
    list_vowels=['a','e','i','o','u']
    no_of_vowels=0;
    for element in x:
       if element in list_vowels:
           vowels+=1;
    return no_of_vowels      
print(no_of_vowels(y))    