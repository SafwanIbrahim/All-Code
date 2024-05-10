amount=int(input())
list =[(amount+1),(amount+1),100,50,20,10,5,2,1]
s=",00"
print(amount)
for x in range(0,7):
    a = list[x]
    b = list[x+1]
    c = list[x+2]
    k=amount%a
    k1=int((k%b)/c)
    C=str(c)
    print(k1,"nota(s) de R$"+" "+C+s)

