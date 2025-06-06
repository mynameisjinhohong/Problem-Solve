a = input()
test = False
for i in range(len(a)):
    target = a[i]
    if target == 's':
        if test:
            print("hiss")
            break
        else:
            test = True
    else:
        test = False
    if i == len(a)-1:
        print("no hiss")