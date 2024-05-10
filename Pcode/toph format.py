n=int(input())
ns=str(n)
li=list(ns)
a=0
for x in range(3,len(li),3):
    if x>=len(li):
        break
    li.insert(-(x+a),",")
    #print(a,x+a)
    a+=1
ns="".join(li)
print(ns)
