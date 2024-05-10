n=int(input())
m=list(map(int,input().split()))
ln=len(m)
freepolice=0
untretened=0
x=1
while m[-x]>0:
    freepolice-=m[-x]
    x+=1
for x in range(ln):
    if m[x]>0:
        freepolice+=m[x]
for x in range(ln):
    if m[x]>0:
        break
    untretened+=1
tretened=(m.count(-1))-untretened
if freepolice>tretened:
    print(untretened)
elif freepolice<tretened:
    untretened+=tretened-freepolice
    print(untretened)
else:
    print(untretened)
