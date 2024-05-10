numofpeople=int(input())
answerofpeople=list(map(int,input().split()))
c=answerofpeople.count(1)
if c==0:
    print("EASY")
else:
    print("HARD")