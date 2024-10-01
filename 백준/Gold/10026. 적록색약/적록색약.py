import queue

class Node:
    def __init__(self,rgb):
        self.visit1 = False
        self.visit2 = False
        if rgb == 'R':
            self.rgb = 0
            self.rgb2 = True
        elif rgb == 'G':
            self.rgb = 1
            self.rgb2 = True
        else:
            self.rgb = 2
            self.rgb2 = False
        self.neighbor = []

def BFS1(node):
    global dap1
    qu = queue.Queue()
    qu.put(node)

    while qu.qsize() > 0:
        nownode1 = qu.get()
        nownode1.visit1 = True
        for i in nownode1.neighbor:
            if (not i.visit1) and i.rgb == nownode1.rgb:
                qu.put(i)
                i.visit1 = True
    dap1 += 1
def BFS2(node):
    global dap2
    qu2 = queue.Queue()
    qu2.put(node)
    while qu2.qsize() > 0:
        nownode2 = qu2.get()
        nownode2.visit2 = True
        for i in nownode2.neighbor:
            if (not i.visit2) and i.rgb2 == nownode2.rgb2:
                qu2.put(i)
                i.visit2 = True
    dap2 += 1

a = int(input())
graph = []
dap1 = 0
dap2 = 0
for i in range(a):
    line = input()
    row = []
    for j in range(len(line)):
        node = Node(line[j])
        if i != 0:
            node.neighbor.append(graph[i-1][j])
            graph[i-1][j].neighbor.append(node)
        if j != 0:
            node.neighbor.append((row[j-1]))
            row[j-1].neighbor.append(node)
        row.append(node)
    graph.append(row)

for i in graph:
    for j in i:
        if not j.visit1:
            BFS1(j)
        if not  j.visit2:
            BFS2(j)
print(dap1,dap2)

