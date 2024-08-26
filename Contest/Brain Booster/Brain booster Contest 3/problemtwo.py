t=int(input())
for x in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    li=[]
    for y in range(1,len(a)+1):
        li.append(y)
    a.sort()
    if a==li:
        print("YES")
    else:
        print("NO")
        