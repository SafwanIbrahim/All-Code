t=int(input())
for x in range(t):
    res=""
    s=input()
    for y in range(0,len(s),2):
        res+=s[y]
    res+=s[-1]
    print(res)

