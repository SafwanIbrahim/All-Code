s1=input()
numOfLower=0
numOfUpper=0
for x in s1:
    if x.isupper():
        numOfUpper+=1
    elif x.islower():
        numOfLower+=1
if numOfUpper>numOfLower:
    res=s1.upper()
else:
    res=s1.lower()
print(res)