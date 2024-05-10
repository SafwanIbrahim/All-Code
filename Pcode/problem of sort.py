"""
x,y=map(int,input().split())
if y%x==0 or x%y==0:
    print("Sao Multiplos")
else:
    print("Nao sao Multiplos")
"""

a,b,c=map(int,input().split())
list=[a,b,c]
inputList = [a,b,c]
list.sort()
for x in list:
    print(x)
print("")

for y in inputList:
    print(y)
