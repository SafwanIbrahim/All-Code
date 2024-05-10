a,b,c=map(float,input().split())
mx = max(a,b,c)
if (b == mx) :
    tmp = a;
    a=b
    b=tmp
elif (c == mx) :
    tmp = a;
    a=c
    c=tmp
if a>=(b+c):
    print("NAO FORMA TRIANGULO")
elif (a*a)==(b*b)+(c*c):
    print("TRIANGULO RETANGULO")
elif (a*a)>((b*b) + (c*c)):
    print("TRIANGULO OBTUSANGULO")
elif (a*a)<((b*b)+(c*c)):
    print("TRIANGULO ACUTANGULO")
if a==b and b==c:
    print("TRIANGULO EQUILATERO")
elif a==b or b==c or a==c:
    print("TRIANGULO ISOSCELES")