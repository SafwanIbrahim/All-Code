n=int(input())
li=[]
while n>0:
    last=n%10
    n=n//10
    li.append(last)
li2=list(set(li))
li2.sort()
mx=li.count(li2[0])
res=li2[0]
for x in li2:
    c=li.count(x)
    if c > mx:
        res=x
        mx=c
print(res)
