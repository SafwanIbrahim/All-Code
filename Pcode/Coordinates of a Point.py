ValueOfPointx,ValueOfPointy=map(float,input().split())


if  ValueOfPointx >0 and ValueOfPointy > 0:
    print("Q1")
elif ValueOfPointx <0 and ValueOfPointy > 0:
    print("Q2")
elif ValueOfPointx <0 and ValueOfPointy < 0:
    print("Q3")
elif ValueOfPointx >0 and ValueOfPointy < 0:
    print("Q4")
elif ValueOfPointx ==0 and ValueOfPointy == 0:
    print("Origem")
elif ValueOfPointx !=0 and ValueOfPointy == 0:
    print("Eixo X")
elif ValueOfPointy !=0 and ValueOfPointx == 0:
    print("Eixo Y")
