from datetime import datetime

dayStart=int(input("Dia "))

timeStart_Hours,Minutes_st,Second_st=map(int,input().split(":"))

dayfinish=int(input("Dia "))

timefinish_Hours,Minutesfh,Secondfh=map(int,input().split(":"))

startDateTime = datetime(2024, 4, dayStart, timeStart_Hours, Minutes_st, Second_st)

endDateTime = datetime(2024, 4, dayfinish, timefinish_Hours, Minutesfh, Secondfh)

dtimestamp1 = startDateTime.timestamp()
dtimestamp2 = endDateTime.timestamp()

Final=dtimestamp2 - dtimestamp1
BD=24*60*60
day =(Final//BD)
print("%.0f"%day)

