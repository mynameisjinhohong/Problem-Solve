from collections import deque
class Node:
    def __init__(self):
        self.neighbor=[]
        self.visit = False
        

v = int(input())
tree = [Node() for _ in range(v)]
gap = [0 for _ in range(v)]
for _ in range(v):
    li = list(map(int,input().split()))
    first = li[0] -1
    su = 0
    for i in range(len(li)):
        if i == 0 or li[i] == -1:
            continue
        if i %2 == 1:
            su = li[i]-1
        else:
            tree[first].neighbor.append([su,li[i]])
qu = deque()
qu.append(0)
tree[0].visit = True
while len(qu) > 0:
    test = qu.popleft()
    target = tree[test]
    for i in target.neighbor:
        if tree[i[0]].visit == False:
            tree[i[0]].visit = True
            gap[i[0]] = i[1] + gap[test]
            qu.append(i[0])
bestidx = 0
best = 0
for i in range(v):
    if best < gap[i]:
        best = gap[i]
        bestidx = i
    gap[i] = 0
for i in tree:
    i.visit = False
tree[bestidx].visit = True
qu = deque()
qu.append(bestidx)
while len(qu) > 0:
    test = qu.popleft()
    target = tree[test]
    for i in target.neighbor:
        if tree[i[0]].visit == False:
            tree[i[0]].visit = True
            gap[i[0]] = i[1] + gap[test]
            qu.append(i[0])
best = 0
for i in range(v):
    if best < gap[i]:
        best = gap[i]
        bestidx = i
    gap[i] = 0
print(best)

