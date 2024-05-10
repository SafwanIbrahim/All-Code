houseLocatated=int(input())


stepsneeded=(houseLocatated//5)
if houseLocatated%5!=0:
    stepsneeded+=1


print(stepsneeded)
