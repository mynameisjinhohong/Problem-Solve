def goTwice(start):
    global dp
    idx = start
    su = dp[idx]
    while True:
        dp[idx] = su
        if idx != 0:
            if dp[idx -1] != -1:
                if dp[idx] +1 >= dp[idx-1]:
                    dp[idx-1] = dp[idx -1]
                else:
                    dp[idx-1] = dp[idx] +1
                    next.append(idx-1)
            else:
                dp[idx -1] = dp[idx] +1
                next.append(idx-1)
        if idx != 100000:
            if dp[idx +1] != -1:
                if dp[idx] +1 >= dp[idx+1]:
                    dp[idx+1] = dp[idx +1]
                else:
                    dp[idx+1] = dp[idx] +1
                    next.append(idx+1)
            else:
                dp[idx +1] = dp[idx] +1
                next.append(idx+1)
        idx *= 2
        if idx > 100001:
            break
        if idx == 0:
            break


N,K = map(int,input().split())
dp = [-1 for _ in range(100001)]
next = []
dp[N] = 0
next.append(N)
while True:
    if dp[K] != -1:
        break
    test = next.copy()
    next.clear()
    susu = len(test)
    for i in range(susu):
        su = test.pop()
        goTwice(su)
print(dp[K])