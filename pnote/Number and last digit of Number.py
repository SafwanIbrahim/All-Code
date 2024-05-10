n=int(input())
numberofdigit=0
while True:
    lastdigit =n%10
    print("last digit =",lastdigit)
    numberofdigit+=1
    n=n//10
    if n==0:
        break
print("number of digit =",numberofdigit)