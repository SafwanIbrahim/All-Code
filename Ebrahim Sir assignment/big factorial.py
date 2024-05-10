n=int(input("enter number : "))
f=1
for x in range(1,n+1):
    f*=x
f=str(f)
if len(f) <= 4:
    print(f)
else:
    start=len(f)-4
    for y in range(start,(len(f))):
        print(f[y],end="")