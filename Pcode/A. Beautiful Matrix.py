li=[]
flag=0

for x in range(5):
    nesli=list(map(int,input().split()))
    li.append(nesli)

for row in range(5):
    if flag==1:
        row -= 1
        break
    i=li[row]
    for column in range(5):
        z=i[column]
        if z==1:
            flag=1
            break


step1=(2-row)
if step1<0:
    step1*=-1

step2=(2-column)
if step2<0:
    step2*=-1

finalstep=step1+step2
print(finalstep)