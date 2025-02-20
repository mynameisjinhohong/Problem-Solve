import sys
input = sys.stdin.readline
def Find(a,b):
    global matrix,n,dp
    if b == (1<<n) -1:
        if matrix[a][0] != 0:
            dp[a][b] = matrix[a][0]
            return  matrix[a][0]
        else:
            return  sys.maxsize
    else:
        mini = sys.maxsize
        for i in range(n):
            if 1<<i & b != 0:
                continue
            if dp[i][1<<i | b] != -1:
                mini = min(dp[i][1<<i | b] + matrix[a][i],mini)
            else:
                mini = min(mini,Find(i,1<<i|b) + matrix[a][i])
        dp[a][b] = mini
        return mini

n = int(input())
matrix = []
for _ in range(n):
    line = list(map(int,input().split()))
    for i in range(n):
        if line[i] == 0:
            line[i] = sys.maxsize
    matrix.append(line)
dp = [[-1 for _ in range(2**n)] for _ in range(n)]
print(Find(0,1))