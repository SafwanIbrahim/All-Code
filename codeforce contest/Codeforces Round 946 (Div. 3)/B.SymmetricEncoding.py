t = int(input())
for i in range(t):
    n = int(input())
    b = input()
    li1=list(b)
    li2=list(set(b))
    li2.sort()
    ln = len(li2)
    for i in range(len(li1)):
        for x in range(ln):
            if li1[i] == li2[x]:
                li1[i] = li2[abs((ln-1)-x)]
                break
    for y in li1:
        print(y,end="")
    print("")

    