n = int(input())
li = list(map(int, input().split()))
indmx = 0
for x in li:
    if x == max(li):
        break
    indmx += 1
step1 = indmx
indmn = 0

li1 = li[::-1]
for y in li1:
    if y == min(li1):
        break
    indmn += 1
step2 = indmn
indmn = len(li) - 1 - indmn
time = step2 + step1
if indmx > indmn:
    time -= 1
print(time)