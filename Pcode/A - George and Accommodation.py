numOfRooms=int(input())
roomtochoose=0
for x in range(numOfRooms):
    propleliving,roomcapacity=map(int,input().split())
    if roomcapacity-propleliving>1:
        roomtochoose+=1
print(roomtochoose) 