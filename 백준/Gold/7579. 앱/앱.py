import sys

n,m = map(int,input().split())
a = list(map(int,input().split()))
c = list(map(int,input().split()))
su = sum(c)
dp = [[0 for _ in range(n+1)]for _ in range(su+1)]
end = False
ans = 0
for i in range(su+1):
    if end:
        break
    for j in range(1,n+1):
        dp[i][j] = dp[i][j - 1]
        if c[j-1] <= i:
            dp[i][j] = max(dp[i-c[j-1]][j-1]+a[j-1],dp[i][j-1])
        if j == n and dp[i][j] >= m:
            end = True
            ans = i
            break
print(ans)