first = list(input())
second = list(input())
dp = [[0 for _ in range(len(first)+1)]for _ in range(len(second)+1)]
for i in range(1,len(second)+1):
    for j in range(1,len(first)+1):
        su = 0
        if first[j-1] == second[i-1]:
            su = dp[i-1][j-1] + 1
        else:
            su = max(dp[i-1][j],dp[i][j-1])
        dp[i][j] = su
ans = []
before = dp[len(second)][len(first)]
x = len(first)
y = len(second)
if dp[len(second)][len(first)] > 0:
    while before > 0 and x > 0 and y > 0:
        if dp[y][x-1] == before:
            x -= 1
            continue
        if dp[y-1][x] == before:
            y -= 1
            continue
        ans.append(first[x-1])
        before = dp[y-1][x-1]
        x -= 1
        y -= 1
    print(dp[len(second)][len(first)])
    ans.reverse()
    print(''.join(ans))
else:
    print(0)
