from collections import deque

def FindBirus(wall1,wall2,wall3,maps):
    global N,M
    visit = [[False for _ in range(M)]for _ in range(N)]
    dq = deque()
    dap = 0
    for i in range(N):
        for j in range(M):
            if 2 == maps[i][j]:
                dq.append([j,i])
                visit[i][j] = True
                dap += 1
            elif 1 == maps[i][j]:
                visit[i][j] = True
                dap += 1
    visit[wall1[1]][wall1[0]] = True
    visit[wall2[1]][wall2[0]] = True
    visit[wall3[1]][wall3[0]] = True
    dap += 3
    dx = [0,0,1,-1]
    dy = [-1,1,0,0]
    while len(dq) > 0:
        target = dq.popleft()
        for i in range(4):
            if target[0] + dx[i]>-1 and target[1]+dy[i] >-1 and target[0] + dx[i] < M and target[1] + dy[i] < N:
                next = [target[0]+dx[i],target[1]+dy[i]]
                if visit[next[1]][next[0]] == False:
                    visit[next[1]][next[0]] = True
                    dq.append(next)
                    dap += 1
    return N*M - dap



N,M = map(int,input().split())
dap = 0
maps = []
for _ in range(N):
    maps.append(list(map(int,input().split())))
for i in range(N*M-2):
    if maps[i//M][i%M] != 0:
        continue
    for j in range(i+1,N*M-1):
        if maps[j // M][j % M] != 0:
            continue
        for k in range(j+1,N*M):
            if maps[k // M][k % M] != 0:
                continue
            su = FindBirus([i%M,i//M],[j%M,j//M],[k%M,k//M],maps)
            if su > dap:
                dap = su
print(dap)