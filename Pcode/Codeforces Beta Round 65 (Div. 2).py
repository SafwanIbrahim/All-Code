li=[]
n=int(input())
for x in range(n):
    li.append(input())
t=len(li)
for y in range(n):
    l=li[y]
    le=len(l)
    if le>10:
        n1=le-2
        n1=str(n1)
        print(l[0]+n1+l[-1])
    if le<11:
        print(l)