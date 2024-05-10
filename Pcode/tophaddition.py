x,y=map(int,input().split())
x1=str(x)
y1=str(y)
x2=list(x1)
y2=list(y1)
mini=min(x,y)
mini=str(mini)
flag = 0
for i in range(1,len(mini)+1):
    l1 = int(x2[-i])
    l2 = int(y2[-i])
    if l1+l2>9:
        print("Yes")
        flag = 1
        break
if flag == 0:
    print("No")
        