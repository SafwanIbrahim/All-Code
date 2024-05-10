numberofmagnets=int(input())
li1=[]
for x in range(numberofmagnets):
    pofm=int(input())
    li1.append(pofm)
group=1
for y in range(len(li1)-1):
    if li1[y]!=li1[y+1]:
        group+=1
print(group)