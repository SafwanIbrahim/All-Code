n,k=map(int,input().split())
a=list(map(int,input().split()))
participants=0
score=a[k-1]
ln=len(a)
for x in range(ln):
    if a[x]>=score and a[x]>0:
        participants+=1
print(participants)