n = int(input())
wine = []
dp = [0 for _ in range(n)]
ans = 0
for i in range(n):
    wine.append(int(input()))
for i in range(n):
    if i == 0:
        dp[i] = wine[i]
        ans = dp[i]    
    elif i == 1:
        dp[i] = dp[i-1] + wine[i]
        ans = dp[i]
    else:
        dp[i] = max(dp[i-2]+wine[i],wine[i]+wine[i-1]+dp[i-3],ans)
        if dp[i] > ans:
            ans = dp[i]
print(ans)
