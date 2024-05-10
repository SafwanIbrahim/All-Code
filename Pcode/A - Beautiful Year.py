year=int(input())
resultyear=year+1
while True:
     yrsstr=str(resultyear)
     li=list(yrsstr)
     setyear=set(li)
     if len(setyear)==len(li):
         break
     else:
         resultyear+=1
print(resultyear)