l,b=map(int,input().split())
year=0
while l<=b:
    l=(l*3)
    b=(b*2)
    year+=1
print(year)