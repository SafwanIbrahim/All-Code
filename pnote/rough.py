"""n=int(input())
for x in range(1,11):
    N=n*x
    print(n,"x",x,"=",N)



n,k=map(int,input().split())


for x in range(k):

    lastdigit=n%10
    if lastdigit==0:
       modify= n/10
    elif lastdigit>0:
       modify= n-1
    n=modify

print(int(n))"""
# username = input()
# listofstring = []
# ln = len(username)
# for x in range(ln):
#     a = username[x]
#     if a not in listofstring:
#         listofstring.append(a)
# ln = len(listofstring)
# if ln % 2 == 0:
#     print("CHAT WITH HER!")
# else:
#     print("IGNORE HIM!")
# b="okjil"
# s=sorted(b)
# print(s)
#
# b="okJil"
# s=sorted(b)
# print(s)\
a="""*
**
***
****
*****"""
print(a)
for x in range(1,6):
    print("*"*x)