"""x1,y1 =input().split()
x2,y2 =input().split()
X1 =float(x1)   
Y1 =float(y1)
X2 =float(x2)
Y2 =float(y2)
#
a=0
if B>C:
    if D>A:
        if k>h:
            if C>0:
                if D>0:
                    if A%2==0:
                       a=1
V=(((X2-X1)**2)+((Y2-Y1))**2)**.5
print("%.4f"%V)"""

a,b,c,d=input().split()
A=int(a)
B=int(b)
C=int(c)
D=int(d)
k=C+D
h=A+B

a=0
if B>C and D>A and k>h and C>0 and D>0 and A%2==0:
    print("Valores aceitos")


else:
    print("Valores nao aceitos")
