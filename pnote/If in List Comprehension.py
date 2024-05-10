# listof3_5=[x for x in range(1,20) if x%3==0 if x%5==0]
# print(listof3_5)
# listof3_5=[x for x in range(1,20) if x%3==0 or x%5==0]
# print(listof3_5)
# listof3_5=[x for x in range(1,20) if x%3==0 and x%5==0]
# print(listof3_5)
# EO=[]
# for x in range(1,21):
#     if x%2==0:
#         EO.append(x)
#         EO.append("Even")
#     else:
#         EO.append(x)
#         EO.append("ODD")
# print(EO)
ifelse=["Even" if x%2==0 else "Odd" for x in range(1,6)]
print(ifelse)


