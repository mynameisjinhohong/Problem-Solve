a = int(input())
for i in range(a):
    b = input()
    c = dict()
    for j in b:
        if j == ' ':
            continue
        if j in c:
            c[j] += 1
        else:
            c[j] = 1
    ans = '?'
    best = 0
    for key,value in c.items():
        if value > best:
            ans = key
            best = value
        elif value == best:
            ans = '?'
    print(ans)

