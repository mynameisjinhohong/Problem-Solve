import sys
from collections import deque

class Node():
    def __init__(self,time,idx):
        self.duration = time
        self.end =sys.maxsize
        self.parent = []
        self.child = []
        self.idx = idx

t = int(input())
for _ in range(t):
    n,k = map(int,input().split())
    times = list(map(int,input().split()))
    nodes = [Node(times[i],i) for i in range(n)]
    for i in range(k):
        a,b = map(int,input().split())
        nodes[a-1].child.append(b-1)
        nodes[b-1].parent.append(a-1)
    endPoint = int(input()) -1
    dq = deque()
    for i in nodes:
        if len(i.parent) < 1:
            dq.append(i.idx)
    while len(dq) > 0:
        target = nodes[dq.popleft()]
        if target.end != sys.maxsize:
            continue
        if len(target.parent) > 0:
            notYet = False
            best = 0
            for i in target.parent:
                if nodes[i].end == sys.maxsize:
                    notYet = True
                    break
                if nodes[i].end > best:
                    best = nodes[i].end
            if notYet:
                dq.append(target.idx)
                continue
            target.end = best + target.duration
            if target.idx == endPoint:
                break
            for i in target.child:
                if nodes[i].end == sys.maxsize:
                    dq.append(i)
        else:
            target.end = target.duration
            for i in target.child:
                dq.append(i)
    print(nodes[endPoint].end)
