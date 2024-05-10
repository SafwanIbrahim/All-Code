"""
n=input("enter number :")
n1=n.split()
s=0
for x in n1:
    s = s+int(x)
print(s)
"""
I=input("Enter you sentence:")

NumberOfWords = 0
NumberOfLetters = 0
NumberOfDigit = 0

for x in I:
    x = x.lower()
    if x >= "a" and x <= "z":
        NumberOfLetters+=1
    elif x >= "0" and x <= "9":
        NumberOfDigit+=1
    elif x == " ":
        NumberOfWords = NumberOfWords + 1
print("number of digit :",NumberOfDigit)
print("number of words :",NumberOfWords+1)
print("number of letters :",NumberOfLetters)


