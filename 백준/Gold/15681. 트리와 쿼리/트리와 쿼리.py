import sys
from collections import deque
input = sys.stdin.readline

class Node():
    def __init__(self,idx):
        self.parent = -1
        self.child = []
        self.neighbor = []
        self.depth = -1
        self.idx = idx

def makeTree(root):
    global nodes,bestDepth
    dq = deque()
    dq.append(root)
    nodes[root].parent = -1
    nodes[root].depth = 0
    while len(dq) > 0:
        targetSu = dq.popleft()
        target = nodes[targetSu]
        for i in target.neighbor:
            if i != target.parent:
                target.child.append(i)
                nodes[i].parent = targetSu
                nodes[i].depth = target.depth + 1
                if nodes[i].depth > bestDepth:
                    bestDepth = nodes[i].depth
                dq.append(i)
        


def countSubtreeNodes(cur):
    global dap,nodes,depth,N
    for i in range(bestDepth,-1,-1):
        for j in depth[i]:
            if len(nodes[j].child) < 1:
                dap[j] = 1
            else:
                su = 0
                for k in nodes[j].child:
                    su += dap[k]
                dap[j] = su + 1


N,R,Q = map(int,input().split())
nodes = [Node(i) for i in range(N)]
dap = [0 for _ in range(N)]
for _ in range(N-1):
    u,v = map(int,input().split())
    nodes[u-1].neighbor.append(v-1)
    nodes[v-1].neighbor.append(u-1)
bestDepth = 0
makeTree(R-1)
depth = [[]for _ in range(bestDepth+1)]
for i in nodes:
    depth[i.depth].append(i.idx)
countSubtreeNodes(R-1)
for _ in range(Q):
    print(dap[int(input())-1])
