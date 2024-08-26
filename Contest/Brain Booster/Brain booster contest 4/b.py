import math

t = int(input())
for x in range(t):
    arr = []
    a,b,c = map(int,input().split())
    arr.extend((a,b,c))

    
    diff = []
    diff.append(abs(arr[0] - arr[1]))
    diff.append(abs(arr[1] - arr[2]))
    diff.append(abs(arr[2] - arr[0]))
    
    cut = 0
    for i in range(3):
        cut = math.gcd(cut, diff[i])
    if cut == 0:
        print(0)
    else:
        arr.sort()

        ans = 0
        ans += (arr[1] - arr[0]) // cut
        ans += (arr[2] - arr[1]) // cut
        print(ans)


