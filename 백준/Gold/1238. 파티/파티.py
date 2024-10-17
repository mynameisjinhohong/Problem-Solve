import sys
import heapq

input = sys.stdin.readline

class Node():
    def __init__(self):
        self.neighbor = []
        self.reverseNeighbor = []
        self.visit = False
        self.hap = -1

n,m,x = map(int,input().split())
'''
maps = [[sys.maxsize for j in range(n)] for i in range(n)]
for i in range(m):
    a,b,c = map(int,input().split())
    maps[a-1][b-1] = c
for i in range(n):
    maps[i][i] = 0

for i in range(n):
    for j in range(n):
        for k in range(n):
            if j == k:
                continue
            maps[j][k] = min(maps[j][k],maps[j][i]+maps[i][k])

dapMaps = []
for i in range(n):
    dapMaps.append(maps[i][x-1]+maps[x-1][i])
'''
maps = [Node() for _ in range(n)]
dap = []
for i in range(m):
    a,b,c = map(int,input().split())
    maps[a-1].neighbor.append([b-1,c])
    maps[b-1].reverseNeighbor.append([a-1,c])

firstQ = []
heapq.heappush(firstQ,(0,x-1))
maps[x-1].hap = 0
while len(firstQ) > 0:
    target = maps[heapq.heappop(firstQ)[1]]
    if target.visit == False:
        target.visit = True
    else:
        continue
    for i in target.neighbor:
        now = maps[i[0]]
        if now.visit == False:
            if now.hap == -1:
                now.hap = target.hap + i[1]
            else:
                now.hap = min(now.hap,target.hap + i[1])
            heapq.heappush(firstQ,(now.hap,i[0]))
for i in maps:
    dap.append(i.hap)
    i.hap = -1
    i.visit = False
heapq.heappush(firstQ,(0,x-1))
maps[x-1].hap = 0
while len(firstQ) > 0:
    target = maps[heapq.heappop(firstQ)[1]]
    if target.visit == False:
        target.visit = True
    else:
        continue
    for i in target.reverseNeighbor:
        now = maps[i[0]]
        if now.visit == False:
            if now.hap == -1:
                now.hap = target.hap + i[1]
            else:
                now.hap = min(now.hap,target.hap + i[1])
            heapq.heappush(firstQ,(now.hap,i[0]))
for i in range(n):
    dap[i] += maps[i].hap
print(max(dap))