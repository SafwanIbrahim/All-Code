mtrx=[[1,2],[3,4],[5,6],[7,8]]
tmtxr=[]
for x in range(2):#2 rows needed
    emptlst=[]
    for y in mtrx:
        emptlst.append(y[x])
    tmtxr.append(emptlst)#so appending 2 times by using range(2)
print(tmtxr)
nestdlis=[[y[x] for y in mtrx] for x in range(2)]
print(nestdlis)