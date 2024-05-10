n=int(input("enter size of list : "))
li=[]
print("enter eliments :")
for x in range(n):
    li.append(int(input()))
num=int(input("the number you are looking for : "))
count= 0
flag = 0
mx=li[0]
mn=li[0]
for x in range(len(li)):
    if li[x]> mx:
        mx=li[x]
    if li[x]<mn:
        mn = li[x]
    if num == li[x]:
        flag = 1
        count=count+1
print("maximum number is =",mx)
print("minimum number is =",mn)
if flag == 0:
    print("Not found")
elif flag == 1:
    print("Found")
    print(count,"times")