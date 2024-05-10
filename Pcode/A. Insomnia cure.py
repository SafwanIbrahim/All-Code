k=int(input())
l=int(input())
m=int(input())
n=int(input())
d=int(input())
li=[]
k1=k
l1=l
m1=m
n1=n
while k<=d:
    if k not in li:
        li.append(k)
    k+=k1
while l<=d:
    if l not in li:
        li.append(l)
    l+=l1
while m<=d:
    if m not in li:
        li.append(m)
    m+=m1
while n<=d:
    if n not in li:
        li.append(n)
    n+=n1
print(len(li))