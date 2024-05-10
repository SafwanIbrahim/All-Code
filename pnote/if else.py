mark =int(input("enter your mark: "))
print("Your grade is",end=" ")
if mark >= 80:
    print("A+")
elif mark >= 70:
    print("A")
elif mark >=60:
    print("A-")
elif mark >= 50:
    print("B")
elif mark >= 40:
    print("C")
elif mark >= 33:
    print("D")
else:
    print("F")