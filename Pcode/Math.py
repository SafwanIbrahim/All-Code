"""emn =int(input())
wh =int(input())
phs =int(input())
x = wh*phs
print("NUMBER =",emn)
print("SALARY = U$","%.2f"%x)

a,b,c=input().split()
A=float(a)
B=float(b)
C=float(c)
v1=((B**2)-(4*A*C))
v2=2*A


if v1<0 or v2==0:
    print("Impossivel calcular")


else :
    x1 = (-B+((B**2)-(4*A*C))**.5)/(2*A)
    x2 = (-B-((B**2)-(4*A*C))**.5)/(2*A)
    print("R1 = %.5f"%x1)
    print("R2 = %.5f"%x2)"""
x=float(input())
if 0 <=x<=25:
    print("Intervalo [0,25]")
elif 25 <x<= 50:
    print("Intervalo (25,50]")
elif 50 <x<= 75:
    print("Intervalo (50,75]")
elif 75 <x<= 100:
    print("Intervalo (75,100]")
else:
    print("Fora de intervalo")