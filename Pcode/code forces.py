priceOf1stBanana,moneyHeHas,numOfBanana=map(int,input().split())


totalMoneyAmount=0


for x in range(1,numOfBanana+1):
    totalMoneyAmount=(priceOf1stBanana*x)+totalMoneyAmount


needsToBorrow=totalMoneyAmount-moneyHeHas


if totalMoneyAmount-moneyHeHas>0:
    print(needsToBorrow)
else:
    print(0)