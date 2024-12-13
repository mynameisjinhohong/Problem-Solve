n = int(input())
dpsu = [[0,0,0,0,0,0,0,0,0,0] for _ in range(n)]
dpsu[0] = [0,1,1,1,1,1,1,1,1,1]
for i in range(1,n):
    for j in range(10):
        if j == 0:
            dpsu[i][j+1] += dpsu[i-1][j]
        elif j == 9:
            dpsu[i][j-1] += dpsu[i-1][j]
        else:
            dpsu[i][j+1] += dpsu[i-1][j]
            dpsu[i][j-1] += dpsu[i-1][j]
ans = 0
for i in range(10):
    ans += dpsu[n-1][i]
print(ans%1000000000)
