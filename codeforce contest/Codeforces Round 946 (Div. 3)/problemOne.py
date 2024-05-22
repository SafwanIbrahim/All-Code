t = int(input())
for x in range(t):
    iconWithOne,iconWithTwo = map(int,input().split())
    if iconWithTwo != 0 and iconWithOne!= 0:
        screen = iconWithTwo//2
        if iconWithTwo%2 > 0:
            screen+=1
        totalicon=screen*15
        leftIcons=totalicon-(4*iconWithTwo)
        if leftIcons >= iconWithOne:
            print(screen)
        else:
            addscreen = (iconWithOne-leftIcons)//15
            if (iconWithOne-leftIcons)%15 > 0:
                addscreen+=1
            print(screen+addscreen) 
    elif iconWithTwo == 0 and iconWithOne!=0:
        res=iconWithOne//15
        if iconWithOne%15 > 0:
            res+=1
        print(res)
    elif iconWithOne == 0 and iconWithTwo!=0:
        res=iconWithTwo//2
        if iconWithTwo%2 > 0:
            res+=1
        print(res)
    else:
        print(0)

