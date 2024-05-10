c=0
n=int(input())
a=n
k=n
while n>1:
    n=n/10
    if n>1:
        c=c+1
cou=1+c
#print(cou)
s=0
#for x in range(cou):
    #b=a//10
    #c=a%10
    #s=(c**cou)+s
    #a=b
while True:
    b=a//10
    c=a%10
    s=(c**cou)+s
    if a//10==0:
        break
    a=b

if k==s:
    print("Armstrong Number")
else:
    print("Not Armstrong Number")
