import queue
class Node:
    def __init__(self,idx):
        self.neighbor = []
        self.visit = False
        self.idx = idx

def BFS(start,end):
    global  citys
    qu = queue.Queue()
    test = []
    qu.put(citys[start])
    test.append(start)
    while qu.qsize() > 0:
        now = qu.get()
        if now.idx == end:
            for i in test:
                citys[i].visit = False
            return True
        for i in now.neighbor:
            if not i.visit:
                i.visit = True
                qu.put(i)
                test.append(i.idx)
    for i in test:
        citys[i].visit = False
    return False

N = int(input())
M = int(input())
citys = []
for i in range(N):
    citys.append(Node(i))
for i in range(N):
    info = input().split()
    for j in range(N):
        if info[j] == '1':
            citys[i].neighbor.append(citys[j])
plan = list(map(lambda x:x-1,map(int,input().split())))
for i in range(len(plan)):
    if i == len(plan) -1:
        print("YES")
        break
    if not BFS(plan[i],plan[i+1]):
        print("NO")
        break

