n=input()
res=0
while len(n) > 1:
    add=0
    for x in range(len(n)):
        add+=int(n[x])
    n=str(add)
    res+=1
print(res)

    