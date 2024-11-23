import sys
import heapq

V,E = map(int,input().split())
dap = 0
treeNode = []
lines = [[] for _ in range(V)]
hq = []
for _ in range(E):
    a,b,c = map(int,input().split())
    lines[a-1].append((c,b-1))
    lines[b-1].append((c,a-1))
treeNode.append(0)
for i in lines[0]:
    heapq.heappush(hq,i)
while len(treeNode) < V:
    next = ()
    while True:
        next = heapq.heappop(hq)
        if next[1] not in treeNode:
            break
    dap += next[0]
    treeNode.append(next[1])
    for i in lines[next[1]]:
        heapq.heappush(hq,i)
print(dap)


