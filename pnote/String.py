b="hI bRo2"
z="""line 1
    line 2
line3"""
print(b[-1])
print(b[1:])
# for x in b:
#     print(x)
for x in range(len(b)):
    print(b[x])
c=b.upper()
print(c)

d=b.lower()
print(d)

e=b.title()
print(e)

f=b.capitalize()
print(f)

g=b.swapcase()
print(g)

h=b.casefold()#powerful lower function
print(h)

i=b.replace("o","e")
print(i)

j=b.split()
print(j)


l=list(b)
print(l)

s=sorted(b,key=str.casefold)
print(s)

joi="".join(s)
print(joi)


print(c.isupper())
print(d.islower())
print(e.istitle())
print(f.isalpha())
print(z)
