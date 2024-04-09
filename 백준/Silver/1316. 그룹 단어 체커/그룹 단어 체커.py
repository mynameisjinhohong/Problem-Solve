a = int(input())
dap = 0
for i in range(a):
    b = list(input())
    c = []
    yes = True
    last = ''
    for j in b:
        if last == j:
            continue
        elif j in c:
            yes = False
            break
        else:
            c.append(j)
        last = j
    if yes:
        dap += 1
print(dap)
