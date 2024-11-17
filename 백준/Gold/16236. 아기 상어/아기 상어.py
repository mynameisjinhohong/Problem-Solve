from collections import deque
import sys

def FindWay(start,end,size):
    global  maps,N
    dq = deque()
    time = 0
    newStart = start
    newStart.append(0)
    dq.append(newStart)
    visit = [[False for _ in range(N)]for _ in range(N)]
    visit[start[1]][start[0]] = True
    dx = [0,0,-1,1]
    dy = [1,-1,0,0]
    while len(dq) > 0:
        target = dq.popleft()
        if target[0] == end[0] and target[1] == end[1]:
            time = target[2]
            break
        for i in range(4):
            if target[0]+dx[i] >-1 and target[0]+dx[i] < N and target[1] + dy[i] > -1 and target[1] + dy[i] < N and visit[target[1] + dy[i]][target[0] + dx[i]] == False and maps[target[1] + dy[i]][target[0] + dx[i]] <= size+1:
                dq.append([target[0]+dx[i],target[1]+dy[i],target[2]+1])
                visit[target[1]+dy[i]][target[0]+dx[0]] = True
    if time == 0:
        time = sys.maxsize
    return time


N = int(input())
maps = []
for _ in range(N):
    maps.append(list(map(int,input().split())))
fish = [[] for _ in range(6)]
sharkPos = []
for i in range(N):
    for j in range(N):
        if maps[i][j] <7 and maps[i][j] > 0:
            fish[maps[i][j]-1].append([j,i])
        if maps[i][j] == 9:
            sharkPos = [j,i]
            maps[i][j] = 0
sharkSize = 1
eatFish = 0
dap = 0
while True:
    move = sys.maxsize
    targetFish = []
    idx = 0
    for i in range(min(6,sharkSize)):
        for j in fish[i]:
            su = FindWay(sharkPos,j,sharkSize)
            if su < move:
                idx = i
                targetFish = j
                move = su
            if len(targetFish) > 0:
                if su == move and targetFish[1]*N+targetFish[0] > j[1]*N + j[0]:
                    idx = i
                    targetFish = j
                    move = su
    if move == sys.maxsize:
        break
    dap += move
    eatFish += 1
    sharkPos = targetFish
    maps[targetFish[1]][targetFish[0]] = 0
    fish[idx].remove(targetFish)
    if eatFish > sharkSize:
        eatFish = 0
        sharkSize += 1
print(dap)
