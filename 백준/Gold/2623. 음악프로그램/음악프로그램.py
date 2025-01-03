from collections import deque


N,M = map(int,input().split())
child = [[] for _ in range(N)]
parent = [[] for _ in range(N)]
for _ in range(M):
    line = list(map(int,input().split()))
    line[0] = 0
    bumo = []
    for i in line:
        if i == 0:
            continue
        parent[i-1] = bumo+parent[i-1]
        for j in bumo:
            child[j].append(i-1)
        bumo.append(i-1)
dq = deque()
for i in range(N):
    if len(parent[i]) == 0:
        dq.append(i)
ans = []
while len(dq) > 0:
    target = dq.popleft()
    ans.append(target)
    for i in child[target]:
        parent[i].remove(target)
        if len(parent[i]) == 0:
            dq.append(i)
if len(ans) == N:
    for i in ans:
        print(i+1)
else:
    print(0)