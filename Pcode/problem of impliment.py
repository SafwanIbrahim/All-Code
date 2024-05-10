#method 1
n=int(input())
impliment=0
for x in range(n):
    a,b,c=map(int,input().split())
    li=[]
    li.extend((a,b,c))
    co=li.count(1)
    if co>=2:
        impliment+=1
print(impliment)

#method 2

n=int(input())
impliment=0
for x in range(n):
    a=list(map(int,input().split()))
    co=a.count(1)
    if co>=2:
        impliment+=1
print(impliment)