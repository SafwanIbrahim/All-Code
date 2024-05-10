# NList=[["if","else"],[20,200],[29.32,41.2]]
# NList[0][0]="elif"
# for x in range(len(NList)):
#     print(NList[x])
# for x in NList:
#     for y in x:
#         print(y)# #list Slicing:
# tpl=(12,23,34)
#
#
# li=[1,5,3,10,2,"Alu","Piyaz","Ada"]
# li2=list(tpl)
# print(li[::])
# print(li[::-1])
# print(li[2::2])
# print(li2)
# print(li[0::2])
# li2.append(12)
# print(li2)
#li2.insert(3,"Dim")
#li2.sort()
#print(li2)
# li2.reverse()
# print(li2)
#b=li2.copy()
#b=li2
#print(b)
# li.append(1)
# print(li.count(1))
# li.extend([90,10])
#or
#li=li+[90,10]
# print(li.index("Alu"))
# print(li+li2)
li=[]
for x in range(3):
    templist=[]
    for y in range(3):
        if y!=x:
            templist.append(y)
    li.append(templist)
print(li)



li1=[[y for y in range(3) if y!=x] for x in range(3)]
print(li1)


li1=[[y for y in range(1,x+1)] for x in range(1,4)]
print(li1)
print(li1[2][2])
li1=["some","thing"]
strng="".join(li1)
print(strng)