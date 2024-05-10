#A-Z=from 65 to 90
#a-z=from 97 to 122
#print(chr(65))
#print(chr(66-1))
#print(chr(97))
for x in range(1,8):
    for y in range(1,x+1):
        print(chr(96+x),end="")
    print("")
print(ord("a"))