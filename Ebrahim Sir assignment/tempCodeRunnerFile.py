n=int(input("enter number: "))
print("Divisors are : ",end="")
for x in range(1,n+1):
    if n%x==0:
        print(x,end=" ")
