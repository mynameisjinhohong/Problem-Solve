from collections import deque

def DFS(startX,startY):
    global canGo,building,lock,h,w,dx,dy,ans
    dq = deque()
    dq.append([startX,startY])
    canGo[startY][startX] = True
    while len(dq) > 0:
        now = dq.popleft()
        for i in range(4):
            targetX = now[0] + dx[i]
            targetY = now[1] + dy[i]
            if 0 <= targetX < w+2 and 0 <= targetY < h+2:
                if canGo[targetY][targetX]:
                    continue
                if building[targetY][targetX] == ".":
                    dq.append([targetX,targetY])  # 갈수 있는 곳이면 가기
                    canGo[targetY][targetX] = True
                elif building[targetY][targetX].isalpha():
                    if 65 <= ord(building[targetY][targetX]) <= 90:
                        if ord(building[targetY][targetX]) in lock:
                            if lock[ord(building[targetY][targetX])][0]:
                                dq.append([targetX,targetY])  # 자물쇠 열려있는 곳이면 가기
                                canGo[targetY][targetX] = True
                    elif 97 <= ord(building[targetY][targetX]) <= 122:
                        canGo[targetY][targetX] = True
                        dq.append([targetX, targetY])
                        if ord(building[targetY][targetX]) - 32 in lock:
                            for k in lock[ord(building[targetY][targetX]) - 32]:
                                if k == True or k == False:
                                    continue
                                for j in range(4):
                                    newTargetx = k[0] + dx[j]
                                    newTargety = k[1] + dy[j]
                                    if 0 <= newTargetx < w+2 and 0 <= newTargety < h+2:
                                        if canGo[newTargety][newTargetx]:
                                            dq.append([k[0], k[1]])  # 자물쇠 열려있는 곳이면 가기
                                            canGo[k[1]][k[0]] = True
                                            break
                            lock[ord(building[targetY][targetX]) - 32] = [True]  # 자물쇠 오픈
                elif building[targetY][targetX] == "$":
                    ans += 1
                    dq.append([targetX, targetY])
                    canGo[targetY][targetX] = True
    '''
    for i in range(4):
        targetX = startX + dx[i]
        targetY = startY + dy[i]
        if 0<= targetX < w and 0<= targetY < h:
            if building[targetY][targetX] == "." and canGo[targetY][targetX] == False:
                DFS(targetX, targetY)  # 갈수 있는 곳이면 가기
            elif building[targetY][targetX].isalpha():
                if 65 <= ord(building[targetY][targetX]) <= 90:
                    if ord(building[targetY][targetX]) in lock:
                        if lock[ord(building[targetY][targetX])][0]:
                            DFS(targetX, targetY)  # 자물쇠 열려있는 곳이면 가기
                elif 97 <= ord(building[targetY][targetX]) <= 122:
                    if ord(building[targetY][targetX]) - 32 in lock:
                        lock[ord(building[targetY][targetX]) - 32][0] = True  # 자물쇠 오픈
                        for k in lock[ord(building[targetY][targetX]) - 32]:
                            if k == True or k == False:
                                continue
                            for j in range(4):
                                newTargetx = k[0] + dx[j]
                                newTargety = k[1] + dy[j]
                                if 0 <= newTargetx < w and 0 <= newTargety < h:
                                    if canGo[newTargety][newTargetx]:
                                        DFS(k[0],k[1])
                                        break
            elif building[targetY][targetX] == "$":
                ans += 1
                DFS(targetX, targetY)
    '''
    return






n = int(input())
for _ in range(n):
    h,w = map(int,input().split())
    canGo = [[False for _ in range(w+2)]for _ in range(h+2)]
    building = ["." *(w+2)]
    lock = dict()
    ans = 0
    dx = [1,-1,0,0]
    dy = [0,0,1,-1]
    for i in range(h):
        lines = input()
        lines = "."+lines+"."
        building.append(lines)
        for j in range(len(lines)):
            if lines[j].isalpha():
                if 65 <= ord(lines[j]) <= 90:
                    if ord(lines[j]) in lock:
                        lock[ord(lines[j])].append([j,i+1])
                    else:
                        lock[ord(lines[j])] = [False,[j,i+1]]
    building.append("." *(w+2))
    keys = input()
    for i in keys:
        if ord(i)-32 in lock:
            lock[ord(i)-32][0] = True

    DFS(0,0)
    '''
    for i in range(w):
        if canGo[0][i] == False:
            if building[0][i] == ".":
                DFS(i,0)
            elif building[0][i] == "$":
                ans += 1
                DFS(i,0)
            elif building[0][i].isalpha():
                if 65 <= ord(building[0][i]) <= 90:
                    if ord(building[0][i]) in lock:
                        if lock[ord(building[0][i])][0]:
                            DFS(i, 0)  # 자물쇠 열려있는 곳이면 가기
                elif 97 <= ord(building[0][i]) <= 122:
                    if ord(building[0][i]) - 32 in lock:
                        DFS(i,0)
                        for k in lock[ord(building[0][i]) - 32]:
                            if k == True or k == False:
                                continue
                            for j in range(4):
                                newTargetx = k[0] + dx[j]
                                newTargety = k[1] + dy[j]
                                if 0 <= newTargetx < w and 0 <= newTargety < h:
                                    if canGo[newTargety][newTargetx]:
                                        DFS(k[0], k[1])
                                        break
                        lock[ord(building[0][i]) - 32] = [True]  # 자물쇠 오픈
        if canGo[h-1][i] == False:
            if building[h-1][i] == ".":
                DFS(i,h-1)
            elif building[h-1][i] == "$":
                ans += 1
                DFS(i,h-1)
            elif building[h-1][i].isalpha():
                if 65 <= ord(building[h-1][i]) <= 90:
                    if ord(building[h-1][i]) in lock:
                        if lock[ord(building[h-1][i])][0]:
                            DFS(i, h - 1)  # 자물쇠 열려있는 곳이면 가기
                elif 97 <= ord(building[h-1][i]) <= 122:
                    if ord(building[h-1][i]) - 32 in lock:
                        DFS(i, h - 1)
                        for k in lock[ord(building[h-1][i]) - 32]:
                            if k == True or k == False:
                                continue
                            for j in range(4):
                                newTargetx = k[0] + dx[j]
                                newTargety = k[1] + dy[j]
                                if 0 <= newTargetx < w and 0 <= newTargety < h:
                                    if canGo[newTargety][newTargetx]:
                                        DFS(k[0], k[1])
                                        break
                        lock[ord(building[h-1][i]) - 32] = [True]  # 자물쇠 오픈
    for i in range(1,h-1):
        if not canGo[i][0]:
            if building[i][0] == ".":
                DFS(0,i)
            elif building[i][0] == "$":
                ans += 1
                DFS(0,i)
            elif building[i][0].isalpha():
                if 65 <= ord(building[i][0]) <= 90:
                    if ord(building[i][0]) in lock:
                        if lock[ord(building[i][0])][0]:
                            DFS(0, i)  # 자물쇠 열려있는 곳이면 가기
                elif 97 <= ord(building[i][0]) <= 122:
                    if ord(building[i][0]) - 32 in lock:
                        DFS(0, i)
                        for k in lock[ord(building[i][0]) - 32]:
                            if k == True or k == False:
                                continue
                            for j in range(4):
                                newTargetx = k[0] + dx[j]
                                newTargety = k[1] + dy[j]
                                if 0 <= newTargetx < w and 0 <= newTargety < h:
                                    if canGo[newTargety][newTargetx]:
                                        DFS(k[0], k[1])
                                        break
                        lock[ord(building[i][0]) - 32] = [True]  # 자물쇠 오픈
        if canGo[i][w-1] == False:
            if building[i][w-1] == ".":
                DFS(w-1,i)
            elif building[i][w-1]  == "$":
                ans += 1
                DFS(w-1,i)
            elif building[i][w-1] .isalpha():
                if 65 <= ord(building[i][w-1] ) <= 90:
                    if ord(building[i][w-1] ) in lock:
                        if lock[ord(building[i][w-1] )][0]:
                            DFS(w - 1, i)  # 자물쇠 열려있는 곳이면 가기
                elif 97 <= ord(building[i][w-1] ) <= 122:
                    if ord(building[i][w-1] ) - 32 in lock:
                        DFS(w - 1, i)
                        for k in lock[ord(building[i][w-1] ) - 32]:
                            if k == True or k == False:
                                continue
                            for j in range(4):
                                newTargetx = k[0] + dx[j]
                                newTargety = k[1] + dy[j]
                                if 0 <= newTargetx < w and 0 <= newTargety < h:
                                    if canGo[newTargety][newTargetx]:
                                        DFS(k[0], k[1])
                                        break
                        lock[ord(building[i][w-1]) - 32] = [True]  # 자물쇠 오픈
    '''
    print(ans)

