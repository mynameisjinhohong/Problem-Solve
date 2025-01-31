def Find(su):
    global dp
    start = 0
    end = len(dp)
    while end - start >1:
        target = dp[(start+end)//2]
        if target == su:
            end = (start+end)//2
            break
        elif target > su:
            end = (start+end)//2
        else:
            start = (start+end)//2
    return end



n = int(input())
li = list(map(int,input().split()))
dp = [0]
for i in range(n):
    fi = Find(li[i])
    if fi >= len(dp):
        dp.append(li[i])
    else:
        dp[fi] = li[i]

print(len(dp)-1)