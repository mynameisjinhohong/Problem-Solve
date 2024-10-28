def Deep(start,type):
    global dap
    x = start[0]
    y = start[1]
    if x == n-1 and y == n-1:
        dap += 1
        return
    if type == 0:
        if x+1 < n:
            if maps[y][x+1] == 0:
                Deep([x+1,y],0)
        if y+1 < n and x+1<n:
            if maps[y+1][x] == 0 and maps[y+1][x+1] == 0 and maps[y][x+1] == 0:
                Deep([x+1,y+1],2)
    elif type == 1:
        if y+1 < n:
            if maps[y+1][x] == 0:
                Deep([x,y+1],1)
        if y+1 < n and x+1<n:
            if maps[y+1][x] == 0 and maps[y+1][x+1] == 0 and maps[y][x+1] == 0:
                Deep([x+1,y+1],2)
    else:
        if x+1 < n:
            if maps[y][x+1] == 0:
                Deep([x+1,y],0)
        if y+1 < n:
            if maps[y+1][x] == 0:
                Deep([x,y+1],1)
        if y+1 < n and x+1<n:
            if maps[y+1][x] == 0 and maps[y+1][x+1] == 0 and maps[y][x+1] == 0:
                Deep([x+1,y+1],2)
    return



n = int(input())
maps = []
dap = 0
for _ in range(n):
    lines = list(map(int,input().split()))
    maps.append(lines)
if maps[n-1][n-1] == 1:
    print(0)
else:
    Deep([1,0],0)
    print(dap)