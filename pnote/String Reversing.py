a=input()
li=a.split()

# for x in range(len(li)):
#     strn=li[x]
#     li[x]=strn[::-1]
# finalstring=" ".join(li)
# print(finalstring)

res=""
for x in li:
    res=res+x[::-1]+" "
print(res)
