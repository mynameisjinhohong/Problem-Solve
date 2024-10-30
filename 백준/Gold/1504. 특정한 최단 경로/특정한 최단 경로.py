import heapq
import sys

def da(start,end):
    global lines,visit,gap
    heap = []
    gap[start] = 0
    heapq.heappush(heap,(0,start))
    while len(heap) >0:
        target = heapq.heappop(heap)
        visit[target[1]] = True
        if target[1] == end:
            break
        for i in lines[target[1]]:
            if visit[i[0]]:
                continue
            su = gap[target[1]] + i[1]
            if su < gap[i[0]]:
                heapq.heappush(heap,(su,i[0]))
                gap[i[0]] = su
    dap = gap[end]
    if dap == sys.maxsize:
        dap = -1
    Init()
    return dap



def Init():
    global visit,gap
    for i in range(len(visit)):
        visit[i] = False
    for i in range(len(gap)):
        gap[i] = sys.maxsize


n,e = map(int,input().split())
lines = [[]for _ in range(n)]
visit = [False for _ in range(n)]
gap = [sys.maxsize for _ in range(n)]
for i in range(e):
    a,b,c= map(int,input().split())
    lines[a-1].append([b-1,c])
    lines[b-1].append([a-1,c])
u,v = map(int,input().split())
plusPath = da(u-1,v-1)
path1 = da(0,u-1)
if path1 >= 0:
    hap = da(v-1,n-1)
    if hap<0:
        path1 = -1
    else:
        path1 = path1 + hap
path2 = da(0,v-1)
if path2 >= 0:
    hap = da(u-1,n-1)
    if hap < 0:
        path2 = -1
    else:
        path2 += hap        
if plusPath < 0:
    print(-1)
elif path1 <0 and path2 <0:
    print(-1)
elif path1 > 0 and path2 < 0:
    print(path1 + plusPath)
elif path2 > 0 and path1 < 0:
    print(path2 + plusPath)
else:
    print(min(path1,path2)+plusPath)