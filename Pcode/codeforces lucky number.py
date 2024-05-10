n=int(input())
srn=str(n)
ln=len(srn)
count=0
for x in range(ln):
    check=n%10
    if check==4 or check==7:
        count=count+1
    second=n//10
    n=second
if count==4 or count==7:
    print("YES")
else:
     print("NO")