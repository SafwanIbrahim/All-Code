n=int(input())
for x in range(n):
    a,b,c=map(int,input().split())
    if a+b == c:
        print("+")
    elif a-b == c:
        print("-")