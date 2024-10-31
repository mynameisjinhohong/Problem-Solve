def DFS(visit,su,startX,startY):
    global maps,r,c,dap
    now = maps[startY][startX]
    if now in visit:
        if su > dap:
            dap = su
        return
    visit[now] = True
    su += 1
    if startX > 0:
        DFS(visit,su,startX-1,startY)
    if startY > 0:
        DFS(visit,su,startX,startY-1)
    if startX < c-1:
        DFS(visit,su,startX+1,startY)
    if startY < r-1:
        DFS(visit,su,startX,startY+1)
    del visit[now]
    return




r,c = map(int,input().split())
maps = []
dap =0
for _ in range(r):
    st = input()
    line = []
    for i in st:
        line.append(ord(i)-65)
    maps.append(line)
visi = dict()
if r== 1 and c == 1:
    print(1)
else:
    DFS(visi,0,0,0)
    print(dap)