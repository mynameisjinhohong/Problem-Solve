import sys
def Calc(foot,target):
    if foot == 0:
        return 2
    if foot == target:
        return  1
    if abs(foot-target) == 2:
        return 4
    return  3

lines = list(map(int,input().split()))
dp1 = [[[sys.maxsize for _ in range(5)]for _ in range(5)] for _ in range(len(lines))]
dp1[0][0][0] = 0
idx = 0
for i in lines:
    idx += 1
    if i == 0:
        break
    #왼발
    for j in range(5):
        for k in range(5):
            if dp1[idx-1][j][k] < sys.maxsize:
                dp1[idx][i][k] = min(dp1[idx][i][k],dp1[idx-1][j][k] + Calc(j,i))
    #오른발
    for j in range(5):
        for k in range(5):
            if dp1[idx-1][j][k] < sys.maxsize:
                dp1[idx][j][i] = min(dp1[idx][j][i],dp1[idx-1][j][k] + Calc(k,i))
ans = sys.maxsize
for i in range(5):
    for j in range(5):
        ans = min(dp1[len(lines)-1][i][j],ans)
print(ans)