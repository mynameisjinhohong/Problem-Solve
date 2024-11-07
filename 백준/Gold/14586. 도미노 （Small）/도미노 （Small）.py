import sys

n = int(input())
domino = []
for i in range(n):
    domino.append(list(map(int,input().split())))
domino.sort(key= lambda x :x[0])
left = []
right = []
dp = []
for i in range(n):
    if i == 0:
        left.append(0)
        continue
    end = domino[i][0] - domino[i][1]
    idx = i
    while True:
        idx -= 1
        if idx < 0:
            left.append(0)
            break
        if domino[idx][0] >= end:
            if domino[idx][0] - domino[idx][1] < end:
                end = domino[idx][0] - domino[idx][1]
        else:
            left.append(idx + 1)
            break
for i in range(n-1,-1,-1):
    if i == n-1:
        right.append(n-1)
        continue
    end = domino[i][0]+ domino[i][1]
    idx = i
    while True:
        idx += 1
        if idx > n-1:
            right.append(n-1)
            break
        if domino[idx][0] <= end:
            if domino[idx][0] + domino[idx][1] > end:
                end = domino[idx][0] + domino[idx][1]
        else:
            right.append(idx - 1)
            break

right.reverse()
dp = [sys.maxsize for i in range(n)]
dp[0] = 1
for i in range(n):
    if left[i] -1 < 0:
        dp[i] = 1
    else:
        dp[i] = dp[left[i]-1] + 1
    for j in range(i):
        if right[j] >= i:
            dp[i] = min(dp[i],dp[j-1]+1)
        if j == 0 and right[j] >= i:
            dp[i] = 1
            break
print(dp[n-1])