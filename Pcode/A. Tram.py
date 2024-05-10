n=int(input())
result=0
li=[]

for x in range(n):
    numofpexit,numofpentered=map(int,input().split())
    restemp=numofpentered-numofpexit
    result+=restemp
    li.append(result)

#print(max(li))
max=li[0]
for y in li:
    if y>max:
        max=y

print(max)