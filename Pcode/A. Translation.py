# berWord=input()
# birWord=input()
# berWord=list(berWord)
# checkerlis=[]
#
#
# for x in range(1,len(berWord)+1):
#     checkerlis.append(berWord[-x])
# result="".join(checkerlis)
#
# if birWord==result:
#     print("YES")
# elif birWord!=result:
#     print("NO")
#

s1=input()
s2=input()
if s1[::-1]==s2:
    print("YES")
else:
    print("NO")