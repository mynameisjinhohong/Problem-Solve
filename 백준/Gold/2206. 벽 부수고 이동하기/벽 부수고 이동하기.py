from collections import deque
import sys

'''
class Node:
    def __init__(self, type):
        self.su = [sys.maxsize, sys.maxsize]
        self.type = type
        self.visit = [False, False]
'''

n, m = map(int, input().split())
maps = []
for _ in range(n):
    row = []
    for i in input():
        if int(i) == 0:
            row.append(True)
        else:
            row.append(False)
    maps.append(row)
nomalmap = [[[False,sys.maxsize] for _ in range(m)]for _ in range(n)]
breakmap = [[[False,sys.maxsize] for _ in range(m)]for _ in range(n)]
dx = [-1, 0, 1, 0]
dy = [0, -1, 0, 1]
nomalmap[0][0][1] = 1
nomalmap[0][0][0] = True
nomalQu = deque()
nomalQu.append((0,0))
while len(nomalQu) > 0:
    target = nomalQu.popleft()
    targetMap = nomalmap[target[1]][target[0]]
    for i in range(4):
        nextTarget = (target[0]+dx[i],target[1]+dy[i])
        if nextTarget[0] < 0 or nextTarget[1] <0 or nextTarget[0] > m-1 or nextTarget[1] > n-1:
            continue
        nextTargetMap = nomalmap[nextTarget[1]][nextTarget[0]]
        if nextTargetMap[0]:
            continue
        elif maps[nextTarget[1]][nextTarget[0]] == False:
            continue
        else:
            nextTargetMap[1] = targetMap[1] + 1
            nextTargetMap[0] = True
            nomalQu.append(nextTarget)
nomalQu.append((0,0))
breakmap[0][0] = [False,1]
while len(nomalQu) > 0:
    target = nomalQu.popleft()
    for i in range(4):
        newTarget = (target[0] + dx[i], target[1] + dy[i])
        if newTarget[0] < 0 or newTarget[1] < 0 or newTarget[0] > m - 1 or newTarget[1] > n - 1:
            continue
        small = [newTarget[0], newTarget[1]]
        smallSu = breakmap[newTarget[1]][newTarget[0]][1]
        if maps[newTarget[1]][newTarget[0]]:
            broken = False
            go = False
            for j in range(4):
                next = (newTarget[0] + dx[j], newTarget[1] + dy[j])
                if next[0] < 0 or next[1] < 0 or next[0] > m - 1 or next[1] > n - 1:
                    continue
                if smallSu > nomalmap[next[1]][next[0]][1] + 1:
                    small = [next[0], next[1]]
                    smallSu = nomalmap[next[1]][next[0]][1] + 1
                    broken = False
                    go = True
                if smallSu > breakmap[next[1]][next[0]][1] + 1:
                    small = [next[0], next[1]]
                    smallSu = breakmap[next[1]][next[0]][1] + 1
                    if breakmap[next[1]][next[0]][0]:
                        broken = True
                    else:
                        broken = False
                    go = True
            if go:
                breakmap[newTarget[1]][newTarget[0]][0] = broken
                breakmap[newTarget[1]][newTarget[0]][1] = smallSu
                nomalQu.append((newTarget[0], newTarget[1]))
        else:
            go = False
            for j in range(4):
                next = (newTarget[0] + dx[j], newTarget[1] + dy[j])
                if next[0] < 0 or next[1] < 0 or next[0] > m - 1 or next[1] > n - 1:
                    continue
                if not nomalmap[next[1]][next[0]][0]:
                    continue
                if smallSu > nomalmap[next[1]][next[0]][1] + 1:
                    small = [next[0], next[1]]
                    smallSu = nomalmap[next[1]][next[0]][1] + 1
                    go = True
            if go:
                breakmap[newTarget[1]][newTarget[0]][0] = True
                breakmap[newTarget[1]][newTarget[0]][1] = smallSu
                nomalQu.append((newTarget[0],newTarget[1]))


if breakmap[n-1][m-1][1] == sys.maxsize:
    print(-1)
else:
    print(breakmap[n-1][m-1][1])

'''
for i in range(n):
    for j in range(m):
        if not maps[i][j]:
            for k in range(4):
                next = (j+dx[k],i+dy[k])
                if next[0] < 0 or next[1] < 0 or next[0] > m - 1 or next[1] > n - 1:
                    continue
                if maps[next[1]][next[0]] and nomalmap[i][j][1] > nomalmap[next[1]][next[0]][1] + 1:
                    nomalmap[i][j][1] = nomalmap[next[1]][next[0]][1] + 1
'''
'''
for i in range(n):
    for j in range(m):
        if maps[i][j]:
            #만약에 벽이 아닌 타일일 경우에는 주위를 다 둘러보고 가장 작은 수를 자기한테 넣어준다(브레이크 맵) 그 가장 작은 수를 가진 친구의 노말맵이 False면 나를 True로 아니면 False로 바꿔준다
            #True는 부수고 온거, False는 안부순거
            small = [j,i]
            smallSu = nomalmap[i][j][1]
            nomal = True
            for k in range(4):
                next = (j + dx[k], i + dy[k])
                if next[0] < 0 or next[1] < 0 or next[0] > m - 1 or next[1] > n - 1:
                    continue
                if smallSu > nomalmap[next[1]][next[0]][1] + 1:
                    small = [next[0],next[1]]
                    smallSu = nomalmap[next[1]][next[0]][1] + 1
            for k in range(4):
                next = (j + dx[k], i + dy[k])
                if next[0] < 0 or next[1] < 0 or next[0] > m - 1 or next[1] > n - 1:
                    continue
                if smallSu > breakmap[next[1]][next[0]][1] + 1:
                    small = [next[0],next[1]]
                    smallSu = breakmap[next[1]][next[0]][1] + 1
                    nomal = False
            if nomal:
                if nomalmap[small[1]][small[0]][0]:
                    breakmap[i][j][0] = False
                else:
                    breakmap[i][j][0] = True
                breakmap[i][j][1] = smallSu
            else:
                if breakmap[small[1]][small[0]][0]:
                    breakmap[i][j][0] = True
                else:
                    breakmap[i][j][0] = False
                breakmap[i][j][1] = smallSu
        else:
            #만약에 벽인 타일일 경우에는 주위를 다 둘러보고 그중에서 노말맵이 True인 애들 중에 가장 작은 것을 넣어준다. 그리고 자기 자신을 False로 바꾼다.
            small = [j, i]
            smallSu = nomalmap[i][j][1]
            nomal = True
            for k in range(4):
                next = (j + dx[k], i + dy[k])
                if next[0] < 0 or next[1] < 0 or next[0] > m - 1 or next[1] > n - 1:
                    continue
                if not nomalmap[next[1]][next[0]][0]:
                    continue
                if smallSu > nomalmap[next[1]][next[0]][1] + 1:
                    small = [next[0], next[1]]
                    smallSu = nomalmap[next[1]][next[0]][1] + 1
            for k in range(4):
                next = (j + dx[k], i + dy[k])
                if next[0] < 0 or next[1] < 0 or next[0] > m - 1 or next[1] > n - 1:
                    continue
                if breakmap[next[1]][next[0]][0]:
                    continue
                if smallSu > breakmap[next[1]][next[0]][1] + 1:
                    small = [next[0], next[1]]
                    smallSu = nomalmap[next[1]][next[0]][1] + 1
            breakmap[i][j][0] = True
            breakmap[i][j][1] = smallSu
'''






'''
dic = dict()
qu = deque()
qu.append((0, 0))
dic[(0, 0)] = True
maps[0][0].su = [1, sys.maxsize]
maps[0][0].visit = [True, False]
if n == 1 and m == 1:
    print(0)
else:
    while len(qu) > 0:
        target = qu.popleft()
        dic[target] = False
        #        if target[0] == m-1 and target[1] == n-1:
        #            break
        targetNode = maps[target[1]][target[0]]
        if targetNode.su[0] != sys.maxsize:
            targetNode.visit[0] = True
        if targetNode.su[1] != sys.maxsize:
            targetNode.visit[1] = True

        for i in maps:
            for j in i:
                if j.su[0] == sys.maxsize and j.su[1] == sys.maxsize:
                    print([-1,-1],end=" ")
                elif j.su[0] == sys.maxsize:
                    print([-1,j.su[1]],end=" ")
                elif j.su[1] == sys.maxsize:
                    print([j.su[0],-1],end=" ")
                else:
                    print(j.su,end=" ")
            print()
        print("--------------")
        print("target = ",target)
        for i in range(4):
            nextTarget = (target[0] + dx[i], target[1] + dy[i])
            if (target[0] + dx[i] < 0 or target[0] + dx[i] > m - 1 or target[1] + dy[i] < 0 or target[1] + dy[
                i] > n - 1):
                continue
            nextNode = maps[nextTarget[1]][nextTarget[0]]
            if nextNode.visit[0] == True and nextNode.visit[1] == True:
                continue
            else:
                go = False
                if targetNode.visit[1] == True:
                    if nextNode.type == True and nextNode.visit[1] == False:
                        if nextNode.su[1] > targetNode.su[1] + 1:
                            nextNode.su[1] = targetNode.su[1] + 1
                            go = True
                    elif nextNode.type == True and nextNode.visit[1] == True:
                        if not targetNode.su[1] + 1 > nextNode.su[1]:
                            nextNode.su[1] = targetNode.su[1] + 1
                            go = True
                else:
                    if nextNode.type == False:
                        nextNode.su[1] = targetNode.su[0] + 1
                        go = True
                if targetNode.visit[0] == True:
                    if nextNode.type == True and nextNode.visit[0] == False:
                        nextNode.su[0] = targetNode.su[0] + 1
                        go = True
                    if nextNode.type == False and nextNode.visit[1] == False:
                        nextNode.su[1] = targetNode.su[0] + 1
                        go = True
                if go:
                    if nextTarget in dic:
                        if dic[nextTarget] == False:
                            qu.append(nextTarget)
                            dic[nextTarget] = True
                    else:
                        qu.append(nextTarget)
                        dic[nextTarget] = True

    if maps[n - 1][m - 1].visit == [False, False]:
        print(-1)
    elif maps[n - 1][m - 1].visit == [True, False]:
        print(maps[n - 1][m - 1].su[0])
    elif maps[n - 1][m - 1].visit == [False, True]:
        print(maps[n - 1][m - 1].su[1])
    else:
        print(min(maps[n - 1][m - 1].su))
'''