n=int(input())
for x in range(n):
    s=input()
    s1=s[0]+s[1]
    s2=s[3]+s[4]
    s3=int(s1)
    if s3==0:
        print(f"12:{s2} AM")
    elif s3 <= 11:
        print(s,"AM")
    elif s3 == 12:
        print(s,"PM")
    elif s3 >= 13:
        s4=abs(s3-12)
        if s4 < 10:
            print("0",end="")
        print(f"{s4}:{s2} PM")

