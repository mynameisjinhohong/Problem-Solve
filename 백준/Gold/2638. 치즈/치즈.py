from  collections import  deque

N,M = map(int,input().split())
maps = []
for _ in range(N):
    maps.append(list(map(int,input().split())))
visit = [[False for _ in range(M)]for _ in range(N)]
dap = 0
while True:
    dq = deque()
    dx = [0,0,-1,1]
    dy = [1,-1,0,0]
    dq.append([0,0])
    visit[0][0] = True
    cheese = dict()
    while len(dq) > 0:
        target = dq.popleft()
        for i in range(4):
            if target[0]+dx[i] < M and target[0]+dx[i] >-1 and target[1]+dy[i] < N and target[1] + dy[i] > -1 and visit[target[1]+dy[i]][target[0]+dx[i]] == False:
                newTarget = [target[0]+dx[i],target[1]+dy[i]]
                if maps[newTarget[1]][newTarget[0]] == 1:
                    if newTarget[1]*M + newTarget[0] in cheese:
                         if cheese[newTarget[1]*M + newTarget[0]]:
                             continue
                         else:
                             cheese[newTarget[1] * M + newTarget[0]] = True
                    else:
                        cheese[newTarget[1]*M + newTarget[0]] = False
                else:
                    visit[newTarget[1]][newTarget[0]] = True
                    dq.append(newTarget)
    visit = [[False for _ in range(M)] for _ in range(N)]
    if len(cheese) < 1:
        break
    for key in cheese:
        if cheese[key]:
            maps[key//M][key%M] = 0
    cheese = dict()
    dap += 1
print(dap)
