a,b = map(int,input().split())
lines = list()
for i in range(a):
    c = input()
    line = list()
    for j in c:
        line.append(int(j))
    lines.append(line)
    
ans = 0
yes = True
if a == 1 and b == 1 and lines[0][0] != 8:
    yes = False
for i in range(int(a/2)):
    for j in range(b):
        target = lines[i][j]
        target2 = lines[a-1-i][b-1-j]
        if (target == 8 and target2 == 8) or (target == 6 and target2 == 9) or (target == 9 and target2 == 6):
            continue
        elif target == target2:
            ans += 1
        else:
            yes = False
            break
if a%2 == 1:
    for i in range(int(b/2)):
        target = lines[int(a/2)][i]
        target2 = lines[int(a/2)][b-1-i]
        if (target == 8 and target2 == 8) or (target == 6 and target2 == 9) or (target == 9 and target2 == 6):
            continue
        elif target == target2:
            ans += 1
        else:
            yes = False
            break
    if b%2 == 1:
        if lines[int(a/2)][int(b/2)] != 8:
            yes =False
if yes:
    print(ans)
else:
    print(-1)
            