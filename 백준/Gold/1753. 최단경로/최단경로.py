import sys
input=sys.stdin.readline
import queue
class Node:
    def __init__(self):
        self.neighbor = []
        self.visit = False
        self.cost = sys.maxsize

v, e = map(int, input().split())
nodes = [Node() for _ in range(v)]
start = int(input())
start -= 1
nodes[start].cost = 0
for i in range(e):
    a, b, c = map(int, input().split())
    nodes[a - 1].neighbor.append([b - 1, c])
qu = queue.PriorityQueue()
qu.put((0,start))
while qu.qsize() > 0:
    target = nodes[qu.get()[1]]
    if target.visit == True:
        continue
    for i in target.neighbor:
        if nodes[i[0]].cost >= target.cost + i[1] and nodes[i[0]].visit == False:
            nodes[i[0]].cost = target.cost + i[1]
            qu.put((nodes[i[0]].cost,i[0]))
    target.visit = True

for i in nodes:
    if i.cost != sys.maxsize:
        print(i.cost)
    else:
        print("INF")
