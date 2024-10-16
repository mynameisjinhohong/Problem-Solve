def FindSpot(qSpot,mySpot):
    myX = mySpot[0]
    myY = mySpot[1]
    for i in qSpot:
        if myX == i[0]:
            return False
        if abs(myX - i[0]) == abs(myY - i[1]):
            return False
    return True

def FindWay(qSpot,xArr,su,startY):
    global dap
    if su == 0:
        dap += 1
        return
    if startY >= n:
        return
    for i in range(n):
        if xArr[i]:
            continue
        if FindSpot(qSpot,(i,startY)):
            qSpot.append((i,startY))
            xArr[i] = True
            FindWay(qSpot,xArr,su -1,startY+1)
            qSpot.pop()
            xArr[i] = False
            
n = int(input())
#first = [[False for i in range(n)]for i in range(n)]
dap = 0
FindWay([],[False for _ in range(n)],n,0)
print(dap)