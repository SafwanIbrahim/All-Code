n=int(input("enter number : "))
sum=0
count=0
for x in range(1,n+1):
    sum+=x
    count+=1
average = (sum/count)
print("sum of number series from 1 to",n,"=",sum)
print("average of number series from 1 to",n,"=",average)