n,h=map(int,input().split())
width=0
li1=list(map(int,input().split()))
for x in li1:
    if x<=h:
        width+=1
    elif x>h:
        width+=2
print(width)