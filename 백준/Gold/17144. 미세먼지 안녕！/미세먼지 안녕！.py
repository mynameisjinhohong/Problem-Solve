def FirstStep(maps):
    global R,C
    dx = [0,0,1,-1]
    dy = [1,-1,0,0]
    newMap = [[0 for _ in range(C)]for _ in range(R)]
    for i in range(R):
        for j in range(C):
            target = maps[i][j]
            if target > 0:
                su = target//5
                for k in range(4):
                    if i+dy[k] > -1 and i+dy[k] < R and j + dx[k] > -1 and j + dx[k] < C and maps[i+dy[k]][j+dx[k]] != -1:
                        newMap[i+dy[k]][j+dx[k]] += su 
                        target -= su
                newMap[i][j] += target
    return newMap

def SecondStep(maps,upStart,downStart):
    global R,C
    upDirection = [[0,-1],[1,0],[0,1],[-1,0]]
    upIdx = 0
    upTarget = [0,upStart-1]
    while True:
        if upTarget[0] == 0 and upTarget[1] == upStart:
            maps[upTarget[1]][upTarget[0]+1] = 0 
            break
        if upTarget[0] + upDirection[upIdx][0] > -1 and upTarget[0] + upDirection[upIdx][0] < C and upTarget[1] + upDirection[upIdx][1] > -1 and upTarget[1] + upDirection[upIdx][1] < upStart+1:
            maps[upTarget[1]][upTarget[0]] = maps[upTarget[1] + upDirection[upIdx][1]][upTarget[0] + upDirection[upIdx][0]]
            upTarget = [upTarget[0]+upDirection[upIdx][0],upTarget[1]+upDirection[upIdx][1]]
        else:
            upIdx += 1
    upIdx = 0
    upTarget = [0,downStart +1]
    upDirection = [[0,1],[1,0],[0,-1],[-1,0]]
    while True: # 여기부터는 아래방향
        if upTarget[0] == 0 and upTarget[1] == downStart:
            maps[upTarget[1]][upTarget[0]+1] = 0
            break
        if upTarget[0] + upDirection[upIdx][0] > -1 and upTarget[0] + upDirection[upIdx][0] < C and upTarget[1] + upDirection[upIdx][1] > downStart-1 and upTarget[1] + upDirection[upIdx][1] < R:
            maps[upTarget[1]][upTarget[0]] = maps[upTarget[1] + upDirection[upIdx][1]][upTarget[0] + upDirection[upIdx][0]]
            upTarget = [upTarget[0]+upDirection[upIdx][0],upTarget[1]+upDirection[upIdx][1]]
        else:
            upIdx += 1
    return


R,C,T = map(int,input().split())
maps = []
for _ in range(R):
    maps.append(list(map(int,input().split())))
upStart = 0
downStart = 0
for j in range(R):
    if maps[j][0] == -1:
        upStart = j
        downStart = j+1
        break
for _ in range(T):
    maps = FirstStep(maps)
    maps[upStart][0] = -1
    maps[downStart][0] = -1
    SecondStep(maps,upStart,downStart)
dap = 0
for i in maps:
    for j in i:
        if j != -1:
            dap += j
print(dap)


