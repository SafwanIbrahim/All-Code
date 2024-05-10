n=int(input("enter a year : "))
if n%4==0:
    if n%100==0:
        if n%400==0:
            print("Yes")
        else:
            print("No")
    else:
        print("Yes")
else:
    print("No")