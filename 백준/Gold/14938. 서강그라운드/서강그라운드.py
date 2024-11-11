import sys

n,m,r = map(int,input().split())
items = list(map(int,input().split()))
dp = [[sys.maxsize for _ in range(n)] for _ in range(n)]
for _ in range(r):
    a,b,c = map(int,input().split())
    if dp[a-1][b-1] > c:
        dp[a-1][b-1] = c
        dp[b-1][a-1] = c
for i in range(n):
    for j in range(n):
        for k in range(n):
            if j == k:
                dp[j][k] = 0
            else:
                dp[j][k] = min(dp[j][k],dp[j][i]+dp[i][k])
dap = 0
for i in range(n):
    test = 0
    for j in range(n):
        if dp[i][j] <= m:
            test += items[j]
    if test > dap:
        dap = test
print(dap)