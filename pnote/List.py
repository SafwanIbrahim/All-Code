data = [1, 9, 7, 8, 52, 23, 90, 76]
data3 = [5,9,52,100]
data2 = ["       1,9,7,8,52,23,90,76      "]
i = 0
data[0]=2
print(data[i])
print(data)

print(data3[:2])
print(len(data))
print(len(data2))
print(len(data3))

print(data3[2:])
print(data3[1:2])
print(9 in data )
print("9"not in data2 )
print("67" in data2 )
print(data +["dhjskf",67])
print(data*5)
b=data.index(9)
print(b)
print(data[-1::-1])