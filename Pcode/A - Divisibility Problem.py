n = int(input())
# reslist = []
# for x in range(n):
#     a, b = map(int, input().split())
#     if a%b==0:
#         reslist.append(0)
#     else:
#         s1=a//b
#         s2=b*(s1+1)
#         needs=s2-a
#         reslist.append(needs)

# for y in reslist:
#     print(y)

for x in range(n):
    a, b = map(int, input().split())
    if a%b==0:
        print("0")
    else:
        s1=a//b
        s2=b*(s1+1)
        needs=s2-a
        print(needs)