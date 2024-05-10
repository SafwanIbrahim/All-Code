n=int(input())
li=list(map(int,input().split()))
ln=len(li)+1
res=[]
for x in range(1,ln):
    ans=li.index(x)
    res.append(ans+1)

for y in res:
    print(y,end=" ")
