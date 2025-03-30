

def Left(map):
    global ans
    nowMap = []
    for i in map:
        li = []
        for j in i:
            li.append(j)
        nowMap.append(li)
    for j in range(len(map)):
        end = 0
        for i in range(1,len(map)):
            target = nowMap[j][i]
            if target == 0:
                continue
            else:
                idx = i -1
                while idx >= end:
                    if nowMap[j][idx] != 0:
                        if nowMap[j][idx] == target:
                            nowMap[j][idx] = target * 2
                            nowMap[j][i] = 0
                            end = idx + 1
                            break
                        else:
                            nowMap[j][i] = 0
                            nowMap[j][idx + 1] = target
                            break
                    if idx == end:
                        nowMap[j][i] = 0
                        nowMap[j][idx] = target
                    idx -= 1
    return nowMap
def Right(map):
    global ans
    nowMap = []
    for i in map:
        li = []
        for j in i:
            li.append(j)
        nowMap.append(li)
    for j in range(len(map)):
        end = len(map) - 1
        for i in range(len(map)-2,-1,-1):
            target = nowMap[j][i]
            if target == 0:
                continue
            else:
                idx = i +1
                while idx <= end:
                    if nowMap[j][idx] != 0:
                        if nowMap[j][idx] == target:
                            nowMap[j][idx] = target * 2
                            nowMap[j][i] = 0
                            end = idx -1
                            break
                        else:
                            nowMap[j][i] = 0
                            nowMap[j][idx - 1] = target
                            break
                    if idx == end:
                        nowMap[j][i] = 0
                        nowMap[j][idx] = target
                    idx += 1
    return nowMap

def Up(map):
    global ans
    nowMap = []
    for i in map:
        li = []
        for j in i:
            li.append(j)
        nowMap.append(li)
    for j in range(len(map)):
        end = 0
        for i in range(1,len(map)):
            target = nowMap[i][j]
            if target == 0:
                continue
            else:
                idx = i -1
                while idx >= end:
                    if nowMap[idx][j] != 0:
                        if nowMap[idx][j] == target:
                            nowMap[idx][j] = target * 2
                            nowMap[i][j] = 0
                            end = idx + 1
                            break
                        else:
                            nowMap[i][j] = 0
                            nowMap[idx +1][j] = target
                            break
                    if idx == end:
                        nowMap[i][j] = 0
                        nowMap[idx][j] = target
                    idx -= 1
    return nowMap

def Down(map):
    global ans
    nowMap = []
    for i in map:
        li = []
        for j in i:
            li.append(j)
        nowMap.append(li)
    for j in range(len(map)):
        end = len(map) - 1
        for i in range(len(map)-2,-1,-1):
            target = nowMap[i][j]
            if target == 0:
                continue
            else:
                idx = i +1
                while idx <= end:
                    if nowMap[idx][j] != 0:
                        if nowMap[idx][j] == target:
                            nowMap[idx][j] = target * 2
                            nowMap[i][j] = 0
                            end = idx -1
                            break
                        else:
                            nowMap[i][j] = 0
                            nowMap[idx -1][j] = target
                            break
                    if idx == end:
                        nowMap[i][j] = 0
                        nowMap[idx][j] = target
                    idx += 1
    return nowMap

n = int(input())
board = []
for i in range(n):
    line = list(map(int,input().split()))
    board.append(line)
li = []
li.append(board)
ans = 0
for i in range(5):
    newli = []
    while len(li) > 0:
        target = li.pop()
        if i == 4:
            newli.append(Down(target))
            newli.append(Up(target))
            newli.append(Left(target))
            newli.append(Right(target))
        else:
            newli.append(Down(target))
            newli.append(Up(target))
            newli.append(Left(target))
            newli.append(Right(target))
    li = []
    for j in newli:
        li.append(j)
for i in li:
    for j in i:
        su = max(j)
        if su > ans:
            ans = su
print(ans)
