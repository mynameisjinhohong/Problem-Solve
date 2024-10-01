n, m = map(int, input().split())

move = [i for i in range(101)]

for _ in range(n + m):
    ind, change = map(int, input().split())
    move[ind] = change

locate = [1]
check = [0] * 101

while locate:
    horse = locate.pop(0)
    if horse == 100:
        print(check[horse])
        break
    for i in range(1,7):
        moved = horse + i
        if moved <= 100:
            moved = move[moved]
            if check[moved] == 0:
                check[moved] = check[horse] + 1
                locate.append(moved)