numofdrinks=int(input())
li=list(map(int,input().split()))
s1=0
for x in li:
    s1+=x
print(s1/numofdrinks)
