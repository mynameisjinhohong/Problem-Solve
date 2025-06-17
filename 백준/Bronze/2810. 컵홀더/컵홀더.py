a = int(input())
b = input()
L = False
cup = 1
for c in b:
    if L:
        L = False
        cup += 1
        continue
    if c == "L":
        L = True
        continue
    cup += 1
print(min(cup,a))