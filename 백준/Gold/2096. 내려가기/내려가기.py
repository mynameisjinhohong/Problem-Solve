import copy

n = int(input())
maxA = [0,0,0]
minA = [0,0,0]
#dp =[[[0,0]for j in range(3)]for i in range(n)]
for i in range(n):


    su =  list(map(int,input().split()))
    newMax = [] 
    newMax.append(max(maxA[0],maxA[1]) + su[0])
    newMax.append(max(maxA[0],maxA[1],maxA[2]) + su[1])
    newMax.append(max(maxA[1],maxA[2]) + su[2])
    newMin = []
    newMin.append(min(minA[0],minA[1]) + su[0])
    newMin.append(min(minA[0],minA[1],minA[2]) + su[1])
    newMin.append(min(minA[1],minA[2]) + su[2])
    maxA = newMax
    minA = newMin
print(max(maxA),min(minA))
