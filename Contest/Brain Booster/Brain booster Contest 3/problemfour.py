n=int(input())
liN=list(map(int,input().split()))
m=int(input())
liM=list(map(int,input().split()))
res=[]
res=liN+liM
res.sort(reverse=True)
b=0
for i in liM:
    if liM.count(i)==1:
        idx=res.index(i)+1+liN.count(i)
        print(idx,end=" ")
    else:
        idx=res.index(i)+1+liN.count(i)+b
        print(idx,end=" ")
        b+=1








