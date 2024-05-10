n=int(input())
for x in range(n):
    m=int(input())
    a=list(map(int,input().split()))
    c=a.copy()
    diff=1
    
    a.sort()
    fe=a[0]
    le=a[-1]
    if a.count(fe) == 1:
        diff+=c.index(fe)
    elif a.count(le) == 1:
        diff+=c.index(le)
    print(diff)
