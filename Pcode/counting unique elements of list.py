# li=[1,1,1,1,1,2,2,3,4,5,6,6,6,6,6,6,7]
# ModifiedLi=list(set(li))
# count=0
# for x in ModifiedLi:
#     count+=1
# print(count)
# a=[1,2,344,3,3,3,3,3,3,3,]
# b=[]
# count=0
# for x in a:
#     if x not in b:
#         b.append(x)
#         count+=1
# print(count)
a=[1,1,1,1,2,2,3,3,3,3,4,3,5,6,7,8,9]
result=[]
for x in a:
    frequency=a.count(x)
    if frequency>3 and x not in result:
        result.append(x)
print(result)