#javascript
while True:
    n1,n2=map(int,input().split())
    if n1==0 and n2==0:
        print("Loop is broken")
        break
    try:
        print(n1/n2)
    except ZeroDivisionError:
        print("denominator cant be 0")