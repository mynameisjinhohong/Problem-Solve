from  collections import  deque

class Node:
    def __init__(self):
        self.neighbor = []
        self.visit = False
"""
def DFS(start,length):
    global nodes
    dap = 0
    target = -1
    nodes[start].visit = True
    end = True
    for i in nodes[start].neighbor:
        if nodes[i[0]].visit == False:
            end = False
            test = DFS(i[0],length+i[1])
            su = test[0]
            if su > dap:
                target = test[1]
                dap = su
    if end:
        return [length,start]
    return [dap,target]
"""

def BFS(start):
    global  nodes
    qu = deque()
    qu.append([start,0])
    nodes[start].visit = True
    best = [start,0]
    while len(qu) > 0:
        now = qu.popleft()
        for i in nodes[now[0]].neighbor:
            if nodes[i[0]].visit == False:
                nodes[i[0]].visit = True
                qu.append([i[0],now[1]+i[1]])
                if now[1]+i[1] > best[1]:
                    best = [i[0],now[1]+i[1]]
    return best




n = int(input())
nodes = [Node() for _ in range(n)]
for i in range(n-1):
    a,b,c = map(int,input().split())
    nodes[a-1].neighbor.append([b-1,c])
    nodes[b-1].neighbor.append([a-1,c])
"""
first = DFS(0,0)[1]
for i in nodes:
    i.visit = False
print(DFS(first,0)[0])
"""
first = BFS(0)[0]
for i in nodes:
    i.visit = False
print(BFS(first)[1])