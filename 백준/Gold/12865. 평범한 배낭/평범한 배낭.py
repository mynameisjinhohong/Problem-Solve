N,K = map(int,input().split())
dap = [[0 for _ in range(K+1)] for _ in range(N+1)]
bag = []
for i in range(N):
    bag.append(list(map(int,input().split())))
for j in range(1,N+1):
    for i in range(K+1):
        if i < bag[j-1][0]:
            dap[j][i] = dap[j-1][i]
        else:
            dap[j][i] = max(dap[j-1][i -bag[j-1][0]] + bag[j-1][1],dap[j-1][i])
print(dap[N][K])
