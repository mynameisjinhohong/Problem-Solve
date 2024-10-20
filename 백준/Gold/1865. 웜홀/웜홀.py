import heapq
import  sys

class Node:
    def __init__(self):
        self.neighbor = []
        self.visit = False
        self.gap = sys.maxsize

def FindWay(start, end, map):
    heap = []
    map[start].gap = 0
    heapq.heappush(heap, (map[start].gap, start))
    while len(heap) > 0:
        su = heapq.heappop(heap)
        if su[1] == end:
            break
        target1 = map[su[1]]
        if target1.visit == False:
            target1.visit = True
        else:
            continue
        for i in target1.neighbor:
            target2 = map[i[0]]
            if target2.visit == False:
                target2.gap = min(target2.gap, target1.gap + i[1])
                heapq.heappush(heap,(target2.gap, i[0]))
    return map[end].gap


t = int(input())
for _ in range(t):
    n, m, w = map(int, input().split())
    #maps = [Node() for _ in range(n)]
    maps = [sys.maxsize for _ in range(n)]
    potal = []
    for _ in range(m):
        a, b, c = map(int, input().split())
        potal.append([a-1,b-1,c])
        potal.append([b-1,a-1,c])
        #maps[a-1].neighbor.append([b - 1, c])
        #maps[b-1].neighbor.append([a - 1, c])
    for i in range(w):
        start, end, gap = map(int, input().split())
        potal.append([start-1,end-1,-gap])
        #maps[start-1].neighbor.append([end-1,-gap])
    yes = False
    maps[0] = 0
    for i in range(n):
        for j in potal:
            if maps[j[1]] > maps[j[0]] + j[2]:
                maps[j[1]] = maps[j[0]] + j[2]
    for j in potal:
        if maps[j[1]] > maps[j[0]] + j[2]:
            yes = True
        #su = FindWay(i[1]-1, i[0]-1, maps)
        #if su < i[2]:
        #    print("YES")
        #    yes = True
        #    break
        #for j in maps:
        #    j.gap = sys.maxsize
        #    j.visit = False
    if yes == False:
        print("NO")
    else:
        print("YES")