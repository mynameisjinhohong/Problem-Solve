a = input()
b = input()
dp = [[0 for _ in range(len(a)+1)]for _ in range(len(b)+1)]
dap = 0
for i in range(len(b)+1):
    for j in range(len(a)+1):
        if i == 0 or j == 0:
            continue
        elif a[j-1] == b[i-1]:
            dp[i][j] = dp[i-1][j-1] +1
        else:
            dp[i][j] = max(dp[i-1][j],dp[i][j-1])
print(dp[len(b)][len(a)])
