li=[(1,"one"),(2,"two"),(3,"three")]
liDi={x:y for x,y in li}
print(liDi)
liDi1={x:y for y,x in li}
print(liDi1)
string1="fhjksfhndsiudffsdhjfsakhfsdajyfhgsaujfyu"
string1={x for x in string1}
print(string1)
li={x for x in liDi.values()}
print(li)
li={x for x in liDi.keys()}
print(li)
