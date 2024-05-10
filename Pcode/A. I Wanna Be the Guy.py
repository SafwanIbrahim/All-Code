
level=int(input())
xcanpass=list(map(int,input().split()))
ycanpass=list(map(int,input().split()))
testlist=[]
xcanpass.remove(xcanpass[0])
ycanpass.remove(ycanpass[0])
for x in xcanpass:
    if x!=0 and x not in testlist:
        testlist.append(x)
for y in ycanpass:
    if y!=0 and y not in testlist:
        testlist.append(y)
if len(testlist)==level:
    print("I become the guy.")
else:
    print("Oh, my keyboard!")