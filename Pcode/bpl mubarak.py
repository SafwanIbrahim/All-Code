n=int(input())
for x in range(n):
    s=input()
    b=0
    for x in s:
        if x!="N" and x!="W" and x!="D":
            b+=1
    o=b//6
    if o==1:
        print(o,"OVER",end=" ")
    elif o>1:
        print(o,"OVERS",end=" ")
    if b%6==1:
        print(b%6,"BALL")
    elif b%6>1:
        print(b%6,"BALLS")
    if b==0:
        print("0 BALL")
