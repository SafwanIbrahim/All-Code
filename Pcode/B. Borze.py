s=input()

li=list(s)
res=[]



while len(li)!= 0:
    if len(li) == 1:
        res.append(0)
        break

    elif li[0] == "." and li[1] == "-":
        res.append(0)
        li.remove(li[0])
    elif li[0] == "." and li[1] == ".":
        res.append(0)
        li.remove(li[0])
    elif li[0] == "-" and li[1] == "-":
        res.append(2)
        li.remove(li[0])
        li.remove(li[0])
    elif li[0] == "-" and li [1] == ".":
        res.append(1)
        li.remove(li[0])
        li.remove(li[0])
for x in res:
    print(x,end="")

    
