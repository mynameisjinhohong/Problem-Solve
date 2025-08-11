import decimal

print("n e")
print("- -----------")
ans = 1
print("0 1")
for i in range(1,10):
    su = 1
    for j in range(1,i+1):
        su *= j
    test = decimal.Decimal(1/su)
    ans += 1/su
    print(i,end = " ")
    if i == 1:
        print(int(ans))
    elif i == 2:
        print(2.5)
    else:
        print(f"{ans:.9f}")