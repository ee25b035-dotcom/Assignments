x=input("Enter the string: ")
x=x.lower()#removing anomalies like lower and upper cases
x=x.strip()#removing spaces, which are usually counted by python as separate element
#Creating empty dictionary  
dict={}#empty dictionary
for ch in x:
    if ch in dict:
        dict[ch]+=1
    else:
        dict[ch]=1
print(dict)
