a = input()
A = 0
B = 0
before = ''
Awin = False
for i in a:
    if i == 'A' or i == 'B':
        before = i
    else:
        if before == 'A':
            A += int(i)
        else:
            B += int(i)
    if A >= 11 and B < 10:
        Awin = True
        break
    elif B >= 11 and A < 10:
        Awin = False
        break
    elif A >= 10 and B >= 10 and abs(A-B) > 1:
        Awin = A>B
        break
if Awin:
    print("A")
else:
    print("B")
