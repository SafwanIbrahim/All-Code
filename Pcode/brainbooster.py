n=int(input())
s=input()
s=list(s)
li=[]
for x in range(n-1):
    u,v=map(int,input().split())
    li.extend([u,v])
qli=[]
q=int(input())
for y in range(q):
    x,c=input().split()
    x=int(x)
    qli.extend([x,c])
i1=0
i2=1
for i in range(q):
    s[qli[i1]-1]=qli[i2]
    i1+=2
    i2+=2
    i3=0
    i4=1
    for c in range(n-1):
        sting=s[li[i3]]+s[li[i4]]
         

    




