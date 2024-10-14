import sys
import heapq
input = sys.stdin.readline

class Node:
    def __init__(self):
        self.neighbor = []
        self.cost = -1
        self.visit = False

n = int(input())
citys = [Node() for _ in range(n)]
m = int(input())
for _ in range(m):
    a,b,c = map(int,input().split())
    citys[a-1].neighbor.append([b-1,c])

for i in range(n):
    heap = []
    heapq.heappush(heap,(0,i))
    citys[i].cost = 0
    while(len(heap) > 0):
        target = citys[heapq.heappop(heap)[1]]
        if target.visit == True:
            continue
        target.visit = True
        for j in target.neighbor:
            arrive = citys[j[0]]
            if arrive.visit:
                continue
            else:
                if arrive.cost <0:
                    arrive.cost = j[1] + target.cost
                    heapq.heappush(heap,(arrive.cost,j[0]))
                else:
                    if j[1] + target.cost < arrive.cost:
                        arrive.cost = j[1] + target.cost
                        heapq.heappush(heap,(arrive.cost,j[0]))
    for j in citys:
        j.visit = False
        if j.cost == -1:
            print(0,end=" ")
        else:
            print(j.cost,end=" ")
        j.cost = -1
    print()
