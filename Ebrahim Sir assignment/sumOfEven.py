n=int(input("enter number : "))
sum=0
count=0
for x in range(2,n+1,2):
    sum+=x
    count+=1
average = (sum/count)
print("sum of even series from 1 to",n,"=",sum)
print("average of even series from 1 to",n,"=",average)