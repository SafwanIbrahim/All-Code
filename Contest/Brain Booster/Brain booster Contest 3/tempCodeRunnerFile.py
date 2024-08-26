from math import*
t=int(input())
for x in range(t):
    n=int(input())
    if n%2==0:
        print(n//2)
    else:
        lcm=1
        for j in (3,sqrt(n),2):
            if n%j==0:
                lcm=j
                break
        print(lcm)

