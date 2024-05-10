salary =float(input())
if salary>4500.00:
   t3= (salary-4500)*(28/100)
   t2=(4500-3000)*(18/100)
   t1=(3000-2000)*(8/100)
   tax=t3+t2+t1
   print("R$ ""%.2f"%tax)
elif salary>=3000.01:
    t2=(salary-3000)*(18/100)
    t1=(3000-2000)*(8/100)
    tax=t2+t1
    print("R$ ""%.2f"%tax)

elif salary>=2000.01:
    t1=(salary-2000)*(8/100)
    print("R$ ""%.2f"%t1)
else:
    print("Isento")
"""
   t3=(salary-4500)*(28/100)
   t2=(3000)*(18/100)
   t1=(3000-2000)*(8/100)





"""
