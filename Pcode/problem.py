Product_Code={
    1:4.00,
    2:4.50,
    3:5.00,
    4:2.00,
    5:1.50,
}
x,y = map(int,input().split())

X=Product_Code[x]
T=X*y
print("Total: R$","%.2f"%T)