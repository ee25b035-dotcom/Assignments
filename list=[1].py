list=[1]
list_out=[]
length=len(list)
for index in range(0,length+1):
    list_out.append(list.insert(index,length+1))
print(list_out)    