n = int(input())
result = n // 2

if n % 2 == 1:
    r2 = result + 1
    r2 = r2 * (-1)
    print(r2)
else:
    print(result)