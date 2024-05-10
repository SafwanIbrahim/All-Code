n=int(input())
a=0
b=1
c=1
for x in range(n-1):
    c=a+b
    a=b
    b=c 
print(f"{n}th number output is = {c}")