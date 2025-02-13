n = int(input())
dp = [[dict() for _ in range(10)] for _ in range(n)]

for i in range(1,10):
    dp[0][i][2**i] = 1

for i in range(n-1):
    for j in range(10):
        for key,value in dp[i][j].items():
            if j == 0:
                dp[i+1][j+1][key|2] = dp[i+1][j+1].get(key|2, 0) + value
            elif j == 9:
                dp[i+1][j-1][key|256] = dp[i+1][j-1].get(key|256, 0) + value
            else:
                dp[i+1][j+1][key|(2**(j+1))] = dp[i+1][j+1].get(key|(2**(j+1)), 0) + value
                dp[i+1][j-1][key|(2**(j-1))] = dp[i+1][j-1].get(key|(2**(j-1)), 0) + value
ans = 0
for i in range(10):
    if 1023 in dp[n-1][i]:
        ans += dp[n-1][i][1023]
        ans %= 1000000000 
print(ans)