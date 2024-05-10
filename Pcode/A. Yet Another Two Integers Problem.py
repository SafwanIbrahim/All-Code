t = int(input())
for x in range(t):
    a,b=map(int,input().split())
    deff=abs(a-b)
    moves=deff//10
    if deff%10 != 0:
        moves+=1
    print(moves)