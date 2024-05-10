a,b,c=map(float,input().split())
max=max(a,b,c)
if a==max and a<(b+c):
    print("Perimetro =",a+b+c)

elif b==max and b<(a+c):
    print("Perimetro =",a+b+c)
elif c==max and c<(a+b):
    print("Perimetro =",a+b+c)
else:
    print("Area =",(((a+b)/2)*c))