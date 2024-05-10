n=int(input())
a=0
b=1
for x in range(n):    
    print(b,end=" ")
    c=a+b
    a=b
    b=c

