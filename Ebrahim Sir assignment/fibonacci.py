n=int(input("enter a number : "))
a=0
b=1
if n>0 :
    print("Fibonacci series are given below ")
for x in range(n):    
    print(b,end=" ")
    c=a+b
    a=b
    b=c
