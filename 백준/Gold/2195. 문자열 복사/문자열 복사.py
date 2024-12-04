s = input()
p = input()
dp = [0 for _ in range(len(p)+1)]
for i in range(len(p)+1):
    for j in range(i):
        target = p[j:i]
        if target in s:
            dp[i] = dp[j] +1
            break
print(dp[len(p)])
