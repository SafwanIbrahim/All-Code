shoe=list(map(int,input().split()))
li=[]
for x in shoe:
    if x not in li:
        li.append(x)
print(4-len(li))