x=input("Enter the string:")
#Taking a random string
list1=[]
#One list to store characters which are read already
list2=[]
#One list to store characters and frequency
for ch in x:
    if ch in list1:
        continue
    else:
        list1.append(ch)
#Build list with all distinct elements to compare it later        
for element in list1:
    times=0
    for ch in x:
        if ch==element:
            times+=1
    list2.append((element,times))
#Build list with frequency also along with the element itself           
print(list2)  
#2 for loops right
