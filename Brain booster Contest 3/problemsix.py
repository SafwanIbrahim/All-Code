t=int(input())
for x in range(t):
    n,y=map(int,input().split())
    li=list(map(int,input().split()))
    res=[]
    for i in range(1,y+1):
        high=0
        for j in li:
            if j%i==0:
                high+=j
        res.append(high)
    print(res.index(min(res))+1)
