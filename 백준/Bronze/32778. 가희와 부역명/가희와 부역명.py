a = input()
doit = True
for i in range(len(a)):
    if a[i] == '(' or a[i] == ')':
        print()
        doit = False
    else:
        print(a[i],end = "")
if doit:
    print()
    print('-')