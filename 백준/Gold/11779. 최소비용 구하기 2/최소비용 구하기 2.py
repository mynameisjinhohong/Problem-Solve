import sys
import heapq
class Node():
    def __init__(self):
        self.neighbor = []
        self.visit = False
        self.gap = sys.maxsize
        self.before = []

n = int(input())
m = int(input())
nodes = [Node() for _ in range(n)]
for _ in range(m):
    a,b,c = map(int,input().split())
    nodes[a-1].neighbor.append([b-1,c])
start,end = map(lambda x:x-1,map(int,input().split()))
hq = []
nodes[start].before.append(start)
nodes[start].gap = 0
heapq.heappush(hq,(0,start))
while True:
    target = nodes[heapq.heappop(hq)[1]]
    if target == nodes[end]:
        break
    for i in target.neighbor:
        newTarget = nodes[i[0]]
        if newTarget.visit:
            continue
        if newTarget.gap > target.gap + i[1]:
            newTarget.gap = target.gap + i[1]
            newTarget.before = target.before + [i[0]]
            heapq.heappush(hq,(newTarget.gap,i[0]))
    target.visit = True
print(nodes[end].gap)
print(len(nodes[end].before))
for i in nodes[end].before:
    print(i+1,end= " ")
