string_in1=input("Enter a string: ")
string_in2=input("Enter another string with same length:")
#These are my test cases for checking whether it works or not
#P1:
#Being able to create a function or mapping using dictionaries
#Throwing an error when two strings which are given don't follow this rule
#P2:
#Comparing two strings,both or one of which may have spaces
#test cases are hello world & ifllg wgrld
#P3:
#Throwing error when two strings are not of the same length, probably will already be 
#taken care of
dict1={}
index=0
is_isomorphic=True
for char in string_in1:
    index_comp=index
    #if a character repeats this goes back
    compared_element=string_in2[index_comp]
    #element at same index
    if char in dict1:
       #If element that was read now is already in the dictionary, then check if it is still
       #unique mapping
       if dict1[char]!=compared_element:
           print("Mapping not proper")
           is_isomorphic=False
           exit(1)
           #Returns that mapping is not proper and exits
    else:
        dict1[char]=compared_element
        #Otherwise adds a new key to the dictionary        
    index+=1
print(is_isomorphic)





