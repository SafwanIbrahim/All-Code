n=int(input())
result="I hate"
x=1
while True:
    if x>=n:
        break
    result+=" that I love"
    x+=1
    if x>=n:
        break
    result+=" that I hate"
    x+=1
result+=" it"
print(result)