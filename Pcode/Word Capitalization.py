a=input()
l=list(a)
firstletter=l[0].upper()
finalli=[]
finalli.append(firstletter)
for x in range(1,len(a)):
        finalli.append(a[x])
finalstring="".join(finalli)
print(finalstring)