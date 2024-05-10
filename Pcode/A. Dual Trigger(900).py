n=int(input())
for x in range(n):
    l=int(input())
    st=input()
    c=st.count("1")
    if l < 3:
        if c == 0:
            print("YES")
        elif c != 0:
            print("NO")

    elif c % 2 == 0:
        print("YES")

    elif c % 2 == 1:
        print("NO")




