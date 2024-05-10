t=int(input())
for x in range(t):
    n=int(input())
    s=input()
    li=list(s)
    se=list(set(s))
    pair=0
    for i in se:
        count=0
        for j in li:
            if i ==j:
                count+=1
        pair+=(count*(count-1))
    print(pair)
