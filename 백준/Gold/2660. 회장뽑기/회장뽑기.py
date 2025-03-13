from collections import deque 
import sys

def BFS(start):
    global group,visit
    dq = deque()
    dq.append([start,0])
    visit[start] = True
    ans = 0
    while len(dq) > 0:
        target = dq.popleft()
        for i in group[target[0]]:
            if not visit[i]:
                dq.append([i,target[1]+1])
                visit[i] = True
                if target[1] +1 > ans:
                    ans = target[1]+1
    return ans


n = int(input())
group = [[] for _ in range(n+1)]
visit = [False for _ in range(n+1)]
while True:
    a,b = map(int,input().split())
    if a == -1 and b == -1:
        break
    group[a].append(b)
    group[b].append(a)
dap = sys.maxsize
daplist = []
for i in range(1,n+1):
    temp = BFS(i)
    if temp < dap:
        dap = temp
        daplist = [i]
    elif temp == dap:
        daplist.append(i)
    visit = [False for _ in range(n+1)]
print(dap,len(daplist))
for i in daplist:
    print(i,end=" ")