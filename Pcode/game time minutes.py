a,b,c,d=input().split()
a1=int(a)
b1=int(b)
a2=int(c)
b2=int(d)

if a2>a1 and b2>b1:
    t11=(a2-a1)
    t12=(b2-b1)
    print("O JOGO DUROU",t11,"HORA(S) E",t12,"MINUTO(S)")
elif a2>a1 and b1>b2:
    t21=(a2-a1-1)
    t22=(b2+60-b1)
    print("O JOGO DUROU",t21,"HORA(S) E",t22,"MINUTO(S)")
elif a2>a1 and b1==b2:
    t31=(a2-a1)
    t32=(b2-b1)
    print("O JOGO DUROU",t31,"HORA(S) E",t32,"MINUTO(S)")
elif a1>a2 and b1==b2:
    t41=(24+a1-a2-1)
    t42=(b2-b1)
    print("O JOGO DUROU",t41,"HORA(S) E",t42,"MINUTO(S)")
elif a1>a2 and b2>b1:
    t51=(24-a1+a2-1)
    t52=(60+b1-b2)
    print("O JOGO DUROU",t51,"HORA(S) E",t52,"MINUTO(S)")
elif a1>a2 and b1>b2:
    t61=(24-a1+a2-1)
    t62=(60+b2-b1)
    print("O JOGO DUROU",t61,"HORA(S) E",t62,"MINUTO(S)")
elif a1==a2 and b1==b2:
    t71=(24+a1-a2)
    t72=(b2-b1)
    print("O JOGO DUROU",t71,"HORA(S) E",t72,"MINUTO(S)")
elif a1==a2 and b2>b1:
    t81=(a1-a2)
    t82=(b2-b1)
    print("O JOGO DUROU",t81,"HORA(S) E",t82,"MINUTO(S)")
elif a1==a2 and b1>b2:
    t91=(24+a1-a2-1)
    t92=(60+b2-b1)
    print("O JOGO DUROU",t91,"HORA(S) E",t92,"MINUTO(S)")