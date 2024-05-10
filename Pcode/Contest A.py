n=int(input())

li=[]
li2=[]
res=[]

for x in range(n):
    a,b,c=map(int,input().split())
    z=0
    li.extend([a,b,c])
    while len(li2)!=a:
        if z==b:
            z=0
        li2.append(b-z)
        z+=1
    if  c >= (a - li2.count(b)):
        res.append("NO")
    else:
        res.append("YES")
    li2.clear()

for z in res:
    print(z)

