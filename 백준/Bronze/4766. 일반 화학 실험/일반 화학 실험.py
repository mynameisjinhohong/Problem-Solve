from decimal import Decimal

before = Decimal('-9999.0')
while(True):
    a = Decimal(input())
    if a == 999:
        break
    if before == Decimal('-9999.0'):
        before = a
    else:
        print(round(a - before,2))
        before = a