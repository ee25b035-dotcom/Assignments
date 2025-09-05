list1=[1]
list_out=[]
#empty list to store all the permutations
n=6
#I need 6 elements in each permutations for the word catdog
length=len(list1)
new_dict={
    "1":"c",
    "2":"a",
    "3":"t",
    "4":"d",
    "5":"o",
    "6":"g"
}
for index in range(0,length+1):
    list1.insert(index,length+1)
    list_out.append(list1.copy())
    list1.remove(length+1)
#building the first step of the permutations    
if n<=1:
    exit(0)
if n>1:
    repeats=0;
    while repeats<n-2:
        list1=list_out.copy()
        #storing list_out in list1
        list_out.clear() 
        #clearing list_out because I don't want the previous permutations
        for element in list1:
            length=len(element)
            #just defining length of list inside list1 so that it is easy to use later
            for index in range(0,length+1):

                element.insert(index,length+1)
                #inserting the new element at all possible places
                list_out.append(element.copy())
                element.remove(length+1)
                #final output is affected by the final state of element after each for loop, which means the element which I add in will not reflect
                #unless I use a copy
                #I must remove because I need to again do the same at a different place
        repeats+=1 
        #making sure I don't build more permutations than required   
        # This next part is about assigning the values of numbers to characters
        # I chose numbers becuase I thought it would be very easy to decide which number to put in next, given a set which is being built   
for element in list_out:
    element=[str(x) for x in element]
    #Converted the set to strings, becuase replace works only with
    string_out=''.join(element)
    for num in string_out:
            string_out=string_out.replace(num,new_dict[num])          
    print(string_out) 

#In the end I print out string_out after building each one    
# What is inefficient is the large number of 2D Lists being stored, each and every possible permutation is stored, which causes load on memory
# In my case it used 10gb ram       





     
