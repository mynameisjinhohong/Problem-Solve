import heapq
import sys
from collections import deque
input = sys.stdin.readline

def DFS(x,y):
    global visit,board,dx,dy
    ans = []
    dq = deque()
    dq.append([x,y])
    visit[y][x] = True
    while len(dq) > 0:
        target = dq.popleft()
        ans.append(target)
        for i in range(4):
            x = dx[i] + target[0]
            y = dy[i] + target[1]
            if visit[y][x] == False and board[y][x] == '0':
                dq.append([x,y])
                visit[y][x] = True
    return ans


N,M = map(int,input().split())
visit = [[False for _ in range(M+2)] for _ in range(N+2)]
board = []
data = [[[]for _ in range(M+2)] for _ in range(N+2)]
ans = []
dx = [1,0,-1,0]
dy = [0,1,0,-1]
board.append(['1' for _ in range(M+2)])
for i in range(N):
    a = input().strip()
    a = '1'+a+'1'
    board.append(list(a))
board.append(['1' for _ in range(M+2)])
idx = 0
for i in range(1,N+1):
    for j in range(1,M+1):
        if board[i][j] == '0' and visit[i][j] == False:
            path = DFS(j,i)
            su = len(path)
            for k in path:
                data[k[1]][k[0]] = [idx,su]
            idx += 1
for i in range(1,N+1):
    line = []
    for j in range(1,M+1):
        if board[i][j] =='1':
            before = []
            hap = 1
            for k in range(4):
                if len(data[i + dx[k]][j + dy[k]]) > 0:
                    if data[i+dx[k]][j+dy[k]][0] not in before:
                        before.append(data[i+dx[k]][j+dy[k]][0])
                        hap += data[i+dx[k]][j+dy[k]][1]
            line.append(hap)
        else:
            line.append(0)
    ans.append(line)
for i in ans:
    for j in i:
        print(j%10,end="")
    print()

