def Find(gameMap,startX,startY,bombMap):
    #up
    idx = 1
    while startY - idx >=0:
        if gameMap[startY - idx][startX] == 2:
            break
        elif gameMap[startY - idx][startX] == 1:
            idx += 1
            continue
        else:
            bombMap[startY - idx][startX] += 1
        idx += 1
    #down
    idx = 1
    while startY + idx <len(gameMap):
        if gameMap[startY + idx][startX] == 2:
            break
        elif gameMap[startY + idx][startX] == 1:
            idx += 1
            continue
        else:
            bombMap[startY + idx][startX] += 1
        idx += 1
    #left
    idx = 1
    while startX - idx >=0:
        if gameMap[startY][startX - idx] == 2:
            break
        elif gameMap[startY][startX - idx] == 1:
            idx += 1
            continue
        else:
            bombMap[startY][startX - idx] += 1
        idx += 1
    #right
    idx = 1
    while startX + idx <len(gameMap[0]):
        if gameMap[startY][startX + idx] == 2:
            break
        elif gameMap[startY][startX + idx] == 1:
            idx += 1
            continue
        else:
            bombMap[startY][startX + idx] += 1
        idx += 1
    

n = int(input())
for _ in range(n):
    gameMap = []
    target = []
    r,c = map(int,input().split())
    bombMap = [[0 for _ in range(c)]for _ in range(r)]
    for i in range(r):
        lines = input()
        gameLine = []
        for j in range(c):
            if lines[j] == "#":
                gameLine.append(2)
            elif lines[j] == ".":
                gameLine.append(0)
            else:
                target.append([j,i])
                gameLine.append(1)
        gameMap.append(gameLine)
    for i in target:
        Find(gameMap,i[0],i[1],bombMap)
    most = 0
    ans = [0,0]
    for i in range(r):
        for j in range(c):
            if bombMap[i][j] > most:
                most = bombMap[i][j]
                ans = [j,i]
    print(ans[1],end="")
    print(",",ans[0])

