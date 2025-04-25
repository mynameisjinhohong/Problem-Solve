import bisect
import sys

input = sys.stdin.readline

def Union(a,b):
    global nodes
    nodes[a] = b

n,m = map(int,input().split())
nodes = [i for i in range(n*m)]
visit = [-1 for i in range(n*m)]
for i in range(n):
    line = input()
    for j in range(m):
        su = i*m + j
        if line[j] == 'U':
            Union(su,su-m)
        elif line[j] == 'D':
            Union(su,su+m)
        elif line[j] == 'L':
            Union(su,su-1)
        elif line[j] == 'R':
            Union(su,su+1)
ans = 0
for i in range(n*m):
    if visit[i] == -1:
        visitedStack = []
        idx = i
        visit[idx] = ans
        visitedStack.append(idx)
        while True:
            idx = nodes[idx]
            visitedStack.append(idx)
            if visit[idx] == -1:
                visit[idx] = ans
            elif visit[idx] < ans:
                for j in visitedStack:
                    visit[j] = visit[idx]
                break
            else:
                ans += 1
                break
print(ans)