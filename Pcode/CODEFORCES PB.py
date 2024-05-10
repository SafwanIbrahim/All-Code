n=int(input())
r=input()
n=len(r)
a=0
d=0
for x in range(n):
    if r[x]=="A":
        a+=1
    elif r[x]=="D":
        d+=1
if d>a:
    print("Danik")
elif a>d:
    print("Anton")
else:
    print("Friendship")