salary =float(input())

def result(p):
    percentage = p / 100
    money_earned = salary * percentage
    new_salary = (salary) + (salary * percentage)
    print("Novo salario:", "%.2f" % new_salary)
    print("Reajuste ganho:", "%.2f" % money_earned)
    print("Em percentual:", p, "%")

if salary > 0 and salary<=400.00:
    result(15)
elif salary >= 400.01 and salary<=800.00:
    result(12)
elif salary >= 800.01 and salary<=1200.00:
    result(10)
elif salary >= 1200.01 and salary<=2000.00:
    result(7)
elif salary>2000.00:
    result(4)
