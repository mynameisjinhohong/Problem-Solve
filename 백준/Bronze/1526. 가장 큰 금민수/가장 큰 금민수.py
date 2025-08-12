a = int(input())
a += 1
while (a > 0):
    a -= 1
    b= str(a)
    no = False
    for i in b:
        if not (i == '4' or i == '7'):
            no = True
            break
    if not no:
        print(a)
        break
