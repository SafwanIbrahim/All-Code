n1=input()
n2=input()
result=""
for x in range(len(n1)):
    if n1[x]==n2[x]:
        result+="0"
    else:
        result+="1"
print(result)  