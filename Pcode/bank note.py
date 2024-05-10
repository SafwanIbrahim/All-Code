amount = float(input())
from math import*

print("NOTAS:")
n1 = amount/100
print(floor(n1),"nota(s) de R$ 100.00")
n2=(amount%100)/50

print(floor(n2),"nota(s) de R$ 50.00")
N2 =(amount%100)
n3=(N2%50)/20

print(floor(n3),"nota(s) de R$ 20.00")
N3=N2%50
n4=(N3%20)/10

print(floor(n4),"nota(s) de R$ 10.00")
N4=N3%20
n5=(N4%10)/5

print(floor(n5),"nota(s) de R$ 5.00")
N5=N3%20
n6=(N5%5)/2

print(floor(n6),"nota(s) de R$ 2.00")
print("MOEDAS:")
N6=N5%5
n7=(N6%2)/1

print(floor(n7),"moeda(s) de R$ 1.00")
N7=N6%2
n8=(N7%1)/0.5

print(floor(n8),"moeda(s) de R$ 0.50")
N8=(N7%1)
n9=(N8%0.5)/0.25

print(floor(n9),"moeda(s) de R$ 0.25")
N9=(N8%0.5)
n10=(N9%0.25)/0.1

print(floor(n10),"moeda(s) de R$ 0.10")
N10=(N9%0.25)
n11=(N10%.1)/0.05

print(floor(n11),"moeda(s) de R$ 0.05")
N11=(N10%.1)
n12=(N11%0.05)/0.01

print("%.0f"%(n12),"moeda(s) de R$ 0.01")