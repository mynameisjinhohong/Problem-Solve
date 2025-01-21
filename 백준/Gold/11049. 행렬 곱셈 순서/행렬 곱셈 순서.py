import sys
n = int(input())
matrix = []
for _ in range(n):
    matrix.append(list(map(int,input().split())))
dp = [[0 for _ in range(n)]for _ in range(n)]
for i in range(1,n):
    for j in range(n-i):
        su = sys.maxsize
        for k in range(i):
            next = matrix[j][0] * matrix[j+k][1] * matrix[j+i][1]
            next += dp[j][j+k]
            next += dp[j+k+1][j+i]
            if next < su:
                su = next
        dp[j][j+i] = su
print(dp[0][n-1])
