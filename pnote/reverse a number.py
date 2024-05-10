n=int(input())
while True:
    n1=n%10
    print(n1,end="")
    if n//10==0:
        break
    n=n//10
