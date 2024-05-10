li=["apple","mango","banana","orange"]
li2=[5,65,34,2,10]

for x in range(0,4):
    li[x]=li[x].upper()
print(li)


y=[x.capitalize() for x in li]
print(y)
#x.capitalize()
#for x in li2
Cpli=[len(x)for x in li]
print(Cpli)
Cpli=[2*x for x in li]
print(Cpli)
Cpli=[x**3 for x in li2]
print(Cpli)
Cpli=[x**3 for x in li2 if x%2==0]
print(Cpli)



lis=[10,20,30,40,50]
lis=[x+5 for x in lis]
print(lis)
liof3=[x*3 for x in range(1,7)]
print(liof3)
liof3=[x for x in range(1,21) if x%3==0]
print(liof3)


b="QWERTY"
b=[x for x in b]
print(b)
