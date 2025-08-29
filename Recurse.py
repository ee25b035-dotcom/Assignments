list1=[1]
list_out=[]
n=6
length=len(list1)
for index in range(0,length+1):
    list1.insert(index,length+1)
    list_out.append(list1.copy())
    list1.remove(length+1)
if n<=1:
    print(list_out);
    exit(0)
if n>1:
    repeats=0;
    while repeats<n-2:
        list1=list_out.copy()
        list_out.clear() 
        for element in list1:
            length=len(element)
            for index in range(0,length+1):
                element.insert(index,length+1)
                list_out.append(element.copy())
                element.remove(length+1)
        repeats+=1
for element in list_out:
    element=[str(x) for x in element]
    string_out=''.join(element)
    for num in string_out:
                if num=='1':
                    string_out=string_out.replace('1','c')
                    #replace creates a new string, so without reassignment it does nothing
                if num=='2':
                    string_out=string_out.replace('2','a')  
                if num=='3':
                    string_out=string_out.replace('3','t')
                if num=='4':
                    string_out=string_out.replace('4','d')  
                if num=='5':
                    string_out=string_out.replace('5','o')
                if num=='6':
                    string_out=string_out.replace('6','g')
    print(string_out)        





     
