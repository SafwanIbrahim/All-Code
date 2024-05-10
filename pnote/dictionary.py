studentid={

    26 :"safwan",
    27 :"atif",
    28 :"B.noor",
    29 :"kamya"

}
n=int(input())
print(studentid.get(30,"No Id Found"))
print(studentid[26])
print(studentid.get(n))
print(5 in studentid)
#for x in range(26,30):
    #print(studentid[x])
#for x in studentid:
    #print(studentid[x])
#for x,value in studentid.items():
    #print(value)
for x,h in studentid.items():
    print(h)