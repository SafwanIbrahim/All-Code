s=input()
ln=len(s)
li=list(s)
sortedlist=[]
if ln==1:
    print(s)
for x in range(0,ln,2):
    if ln==1:
        break
    sortedlist.append(li[x])
sortedlist.sort()

y=1
while True:
    if ln==1:
        break
    sortedlist.insert(y,"+")
    y+=2
    if sortedlist[-2]=="+":
        break
final="".join(sortedlist)
print(final)