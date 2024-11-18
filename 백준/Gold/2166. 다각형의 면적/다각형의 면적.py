n = int(input())
up = 0
down = 0
beforeX = 1
beforeY = 1
start = True
startX = 0
startY = 0
for _ in range(n):
    x,y = map(int,input().split())
    if start:
        start = False
        startX = x
        startY = y
        beforeX = x
        beforeY = y
    else:
        up += beforeX * y
        down += beforeY * x
        beforeX = x
        beforeY = y
up += beforeX * startY
down += beforeY * startX
dap = abs(up-down)/2
print(round(dap,2))