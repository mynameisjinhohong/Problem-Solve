class Node:
    def __init__(self,gap,idx):
        self.gap = gap
        self.idx = idx
        self.left = -1
        self.right = -1
        self.parent = -1
        self.visit = False

def FindLeft(nowIdx):
    global nodes
    target = nodes[nowIdx]
    while True:
        if target.left == -1:
            break
        elif nodes[target.left].visit:
            break
        else:
            target = nodes[target.left]
    return target.idx

def FindEnd(startIdx):
    global nodes
    target = nodes[startIdx]
    while True:
        if target.left != -1:
            left = nodes[target.left]
            if left.visit == False:
                target = left
                continue
        if target.right != -1:
            right = nodes[target.right]
            if right.visit == False:
                target = right
                continue
        break
    return target
        
    


def Postorder(startIdx):
    target = nodes[startIdx]
    if target.left != -1:
        Postorder(target.left)
    if target.right != -1:
        Postorder(target.right)
    print(target.gap)
    '''
    if target.visit:
        return
    if target.right == -1:
        print(target.gap)
        target.visit = True
    else:
        if not nodes[target.right].visit:
            print(nodes[target.right].gap)
            nodes[target.right].visit = True
        print(target.gap)
        target.visit = True
    rightIdx = nodes[target.parent].right
    rightIdx = FindLeft(rightIdx)
    if rightIdx != -1:
        Postorder(rightIdx)
    if target.parent != -1:
        Postorder(target.parent)
    '''
nodes = []
target = Node(int(input()),0)
nodes.append(target)
idx = 1
while True:
    try:
        su = int(input())
        node = Node(su,idx)
        target = nodes[0]
        while True:
            if su > target.gap:
                if target.right == -1:
                    target.right = idx
                    node.parent = target.idx
                    break
                else:
                    target = nodes[target.right]
            else:
                if target.left == -1:
                    target.left = idx
                    node.parent = target.idx
                    break
                else:
                    target = nodes[target.left]
        '''
        if target.gap > su:
            node.parent = target.idx
            target.left = node.idx
            target = node
        elif target.gap < su:
            while True:
                #자신보다 작은 높은 숫자가 나올때 까지 올라감 만약에 루트노드까지 갔으면 바로 오른쪽 아니면 나보다 높은 노드의 한칸 왼쪽의 오른쪽
                if target.gap > su:
                    target =  nodes[target.left]
                    node.parent = target.idx
                    target.right = node.idx
                    break
                elif target.parent == -1:
                    target.right = node.idx
                    node.parent = target.idx
                    target = node
                    break
                target = nodes[target.parent]
        '''
        nodes.append(node)
        idx += 1
    except:
        break
#Postorder(0)
start = FindEnd(0)
printIdx = 0
while printIdx < len(nodes):
    print(start.gap)
    start.visit = True
    printIdx += 1
    start = FindEnd(start.parent)


    