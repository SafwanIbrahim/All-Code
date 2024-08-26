t = int(input())
for i in range(t):
    n = int(input())
    li = list(map(int,input().split()))   
    resli=[]
    for y in range(n-2):
        temp=[]
        temp.append(li[y])
        temp.append(li[y+1])
        temp.append(li[y+2])
        resli.append(temp)
    print(resli)
        
        
