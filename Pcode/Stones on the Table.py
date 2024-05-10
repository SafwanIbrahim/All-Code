numofstone = int(input())
colorofstone = input()
needtotake = 0

if len(colorofstone) == 1:
    print(needtotake)

else:
    for x in range(len(colorofstone) - 1):
        if colorofstone[x] == colorofstone[x + 1]:
            needtotake += 1

    print(needtotake)