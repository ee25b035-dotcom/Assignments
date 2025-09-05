MRP=24.95
DISCOUNT=40
Actual_MRP=MRP*(1-(DISCOUNT/100))
FIRST_COPY_SHIPPING=3
ADDITIONAL_COPY_SHIPPING=0.75
NUMBER=60
COST=0
repeats=0
while repeats<NUMBER:
    if (repeats==0):
        COST=Actual_MRP+FIRST_COPY_SHIPPING+COST
        repeats+=1
                
    elif(repeats>0):
        COST=Actual_MRP+ADDITIONAL_COPY_SHIPPING+COST
        repeats+=1
print(f"{COST:.2f}")     
#One way to reduce the number of digits is to use an f string
# Use f"{:.2f}""       
