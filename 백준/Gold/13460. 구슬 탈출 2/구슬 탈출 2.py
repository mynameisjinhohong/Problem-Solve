from collections import deque
def Move(dir,beforeBoard):
    global Dx,Dy,find
    board = list()
    redX = 0
    redY = 0
    blueX = 0
    blueY = 0
    for i in range(len(beforeBoard)):
        line = list()
        for j in range(len(beforeBoard[i])):
            line.append(beforeBoard[i][j])
            if beforeBoard[i][j] == 'B':
                blueX = j
                blueY = i
            if beforeBoard[i][j] == 'R':
                redX = j
                redY = i
        board.append(line)
    dx = Dx[dir]
    dy = Dy[dir]
    redDone = False
    blueDone = False
    endBranch = False
    while (not redDone) or (not blueDone):
        if not redDone:
            redNext = board[redY+dy][redX+dx]
            if redNext == '.':
                board[redY+dy][redX+dx] = 'R'
                board[redY][redX] = '.'
                redX += dx
                redY += dy
            elif redNext == '#':
                redDone = True
            elif redNext == 'B':
                if blueDone:
                    redDone = True
            elif redNext == 'O':
                find = True
                redDone = True
                board[redY][redX] = '.'
        if not blueDone:
            blueNext = board[blueY+dy][blueX+dx]
            if blueNext == '.':
                board[blueY+dy][blueX+dx] = 'B'
                board[blueY][blueX] = '.'
                blueX += dx
                blueY += dy
            elif blueNext == '#':
                blueDone = True
            elif blueNext == 'R':
                if redDone:
                    blueDone = True
            elif blueNext == 'O':
                endBranch = True
                blueDone = True
                find = False
    if not endBranch:
        return board

def SameList(a,b):
    for i in range(len(a)):
        for j in range(len(a[i])):
            if a[i][j] != b[i][j]:
                return False
    return True

N,M = map(int,input().split())
board = []
ans = 0
redX = 0
redY = 0
blueX = 0
blueY = 0
for i in range(N):
    line = list(input())
    for j in range(M):
        if line[j] == 'R':
            redX = j
            redY = i
        elif line[j] == 'B':
            blueX = j
            blueY = i
    board.append(line)
Dx = [1,0,-1,0]
Dy = [0,1,0,-1]
beforeBoard = [[board,0]]
idx = -1
find = False
while True:
    idx += 1
    if idx > len(beforeBoard)-1:
        break
    if beforeBoard[idx][1] > 9:
        break
    if find:
        break
    for i in range(4):
        next = Move(i,beforeBoard[idx][0])
        if find:
            ans = beforeBoard[idx][1] + 1
            break
        if next == None:
            continue
        for j in beforeBoard:
            if SameList(j[0],next):
                break
            if j == beforeBoard[len(beforeBoard)-1]:
                beforeBoard.append([next,beforeBoard[idx][1]+1])
                break

if ans == 0:
    print(-1)
else:
    print(ans)
