from collections import deque

n,m = map(int,input().split())
parent = [[] for _ in range(n+1)]
child = [[] for _ in range(n+1)]
for _ in range(m):
    a,b = map(int,input().split())
    parent[b].append(a)
    child[a].append(b)

dq = deque()
for i in range(1,n+1):
    if len(parent[i]) < 1:
        dq.append(i)
for i in range(1,n+1):
    target= dq.popleft()
    print(target,end=" ")
    for j in child[target]:
        parent[j].remove(target)
        if len(parent[j]) < 1:
            dq.append(j)