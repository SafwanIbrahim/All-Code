a,b=input().split()
a1=int(a)
b1=int(b)

if b1>a1:
    d=(b1-a1)
    print("O JOGO DUROU",d,"HORA(S)")
elif a1>b1:
    c=((24-a1)+(b1))
    print("O JOGO DUROU",c,"HORA(S)")
else:
    e=((24-a1)+(b1))
    print("O JOGO DUROU", e, "HORA(S)")