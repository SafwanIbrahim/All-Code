#print(8)
list1=[]
n=int(input())
for x in range(n):
    a,b,c=map(int,input().split())
    if a+b>c and a+c>b and b+c>a:
        list1.append("YES")
    else:
        list1.append("NO")
for x in list1:
    print(x)