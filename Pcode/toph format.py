n=input()
li=list(n)
a=0
for x in range(3,len(li),3):
    if x>=len(li):
        break
    li.insert(-(x+a),",")
    a+=1
    #print(a,x+a)
for x in li:
    print(x,end="")
