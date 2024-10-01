import sys
input = sys.stdin.readline

class Node:
    def __init__(self):
        self.neighbor = []
        self.hap = sys.maxsize
        self.visit = False

n = int(input())
m = int(input())
nodes = [Node() for i in range(n)]
for i in range(m):
    a,b,c = map(int,input().split())
    nodes[a-1].neighbor.append([b-1,c])
start,end = map(int,input().split())

nodes[start-1].hap = 0
target = nodes[start-1]
while True:
    out = True
    target.visit = True
    for i in target.neighbor:
        if not nodes[i[0]].visit:
            if nodes[i[0]].hap > i[1] + target.hap:
                nodes[i[0]].hap = i[1] + target.hap
    small = sys.maxsize
    for i in nodes:
        if i.visit == False and i.hap < small:
            out = False
            small = i.hap
            target = i
    if out:
        break
print(nodes[end-1].hap)