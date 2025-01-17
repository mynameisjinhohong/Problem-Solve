from  collections import  deque

class Node:
    def __init__(self,next):
        self.visit = -1
        self.next = next
        self.before = 0

def Find(nodes,start,idx):
    start.visit = idx
    target = start
    su = 0
    while True:
        su += 1
        if nodes[target.next].visit > -1:
            if nodes[target.next].visit == idx:
                cycle = 0
                start = target.next
                tar = nodes[target.next]
                while True:
                    cycle += 1
                    if start == tar.next:
                        return su - cycle
                    tar = nodes[tar.next]
            else:
                return su
        target = nodes[target.next]
        target.visit = idx

t = int(input())
for _ in range(t):
    n = int(input())
    stu = list(map(int,input().split()))
    ans = 0
    nodes = []
    for i in stu:
        nodes.append(Node(i-1))
    idx = 0
    for i in nodes:
        if i.visit < 0:
            ans += Find(nodes,i,idx)
            idx += 1
    print(ans)