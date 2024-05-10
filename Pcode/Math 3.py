"""a,b,c =input().split()
A = int(a)
B = int(b)
C = int(c)

X=int((A+B+abs(A-B))/2)
Y=int((A+C+abs(A-C))/2)
Z=int((B+C+abs(B-C))/2)

print(max(X,Y,Z),"eh o maior")

from math import*
duration_in_seconds = int(input())

T_in_hours =(duration_in_seconds/3600)
T1=floor(T_in_hours)
T_in_minutes =(duration_in_seconds%3600)/60
T2=floor(T_in_minutes)
T_in_seconds =(duration_in_seconds%3600)%60
Tt1=str(T1)
Tt2=str(T2)
Tt3=str(T_in_seconds)

print(Tt1+":"+Tt2+":"+Tt3)"""
from math import*
Age=int(input())
AY=Age/365
print(floor(AY),"ano(s)")
AM=(Age%365)/30
print(floor(AM),"mes(es)")
AD=(Age%365)%30
print(AD,"dia(s)")