m,n=map(int,input().split())
def fun1():
    a=""
    for y in range(n):
        a+="#"
    return a
def fun2():
    b=""
    for z in range(n-1):
        b+="."
    return b
a=fun1()
b=fun2()
i=0
while True:
    i+=1
    print(a)
    if i==m:
        break
    i+=1
    print(b,end="")
    print("#")
    if i==m:
        break
    i+=1
    print(a)
    if i==m:
        break
    i+=1
    print("#",end="")
    print(b)
    if i==m:
        break