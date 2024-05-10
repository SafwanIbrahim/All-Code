li=[1,3,4,543,3,21,54]
n=int(input("Search for number:"))
y=1
for x in li:
    if x==n:
        print("Found")
        y=0
        break
if y==1:
    print("Not found")