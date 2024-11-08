import sys
from collections import deque

def find(n,target,su):
    global dap,bun,dp
    dp[n] = su
    if n >= target:
        if su + (n-target) < dap:
            dap = su + n - target
            bun = 1
        elif su + (n-target) == dap:
            bun += 1
        return
    if n <= 0:
        return
    if n < target:
        if dp[n*2] >= su + 1:
            find(n*2,target,su+1)
        if dp[n+1] >= su + 1:
            find(n+1,target,su+1)
        if dp[n-1] >= su + 1:
            find(n-1,target,su+1)

def find2(n,k):
    global dap,bun,dp
    dq = deque()
    dq.append([n,0])
    dp[n] = 0
    while len(dq) > 0:
        target = dq.popleft()
        dp[target[0]] = target[1]
        if target[0] >=k:
            if target[1] + (target[0] - k) < dap:
                dap = target[1] + target[0] - k
                bun = 1
            elif target[1] + target[0] - k == dap:
                bun += 1
            continue
        if target[0]< 0:
            continue
        if target[0] < k:
            if dp[target[0]*2] >= target[1] + 1:
                dq.append([target[0]*2,target[1]+1])
            if dp[target[0]+1] >= target[1] + 1:
                dq.append([target[0]+1,target[1]+1])
            if dp[target[0]-1] >= target[1] + 1:
                dq.append([target[0]-1,target[1]+1])
    


dp = [sys.maxsize for _ in range(200001)]
dap = sys.maxsize
bun = 0
N,K = map(int,input().split())
dp[N] = 0
if N >= K:
    print(N-K)
    print(1)
else:
    find2(N,K)
    print(dap)
    print(bun)