n=int(input())
for x in range(1,n+1):
    for j in range(x,n):
        print(" ",end="")
    for i in range(1,x+1):
        if i>x:
            print("*",end=" ")
        else:
            print("*")
    if x<n:
        print("")