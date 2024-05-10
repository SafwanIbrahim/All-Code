n=int(input())
li=[100,20,10,5,1]
bill=0
for x in li:
    bill+=n//x
    n=n%x
print(bill)