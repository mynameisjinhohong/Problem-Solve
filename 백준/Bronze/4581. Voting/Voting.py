while(True):
    a = input()
    if a == "#":
        break
    y = 0
    n = 0
    b = 0
    for i in a:
        if i == 'Y':
            y += 1
        elif i == 'N':
            n += 1
        elif i == 'A':
            b += 1
    half = len(a) //2
    if len(a) %2 == 1:
        half += 1
    if b >= half:
        print("need quorum")
    else:
        if y > n:
            print("yes")
        elif y == n:
            print("tie")
        else:
            print("no")