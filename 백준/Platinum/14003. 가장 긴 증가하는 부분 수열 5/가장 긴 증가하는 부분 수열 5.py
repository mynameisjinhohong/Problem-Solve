import bisect
import sys

input = sys.stdin.readline

n = int(input())
a = list(map(int,input().split()))
dp = list()
lidp = list()
dp.append(a[0])
lidp.append(0)
for i in range(1,len(a)):
    pos = bisect.bisect_right(dp,a[i])
    if pos == len(dp):
        if a[i] != dp[pos-1]:
            dp.append(a[i])
            lidp.append(pos)
        else:
            lidp.append(pos-1)
    else:
        if a[i] != dp[pos-1]:
            dp[pos] = a[i]
            lidp.append(pos)
        else:
            lidp.append(pos-1)
print(len(dp))
target = len(dp)-1
ans = list()
for i in range(n-1,-1,-1):
    if lidp[i] == target:
        ans.append(a[i])
        target -= 1
while len(ans) > 0:
    print(ans.pop(),end=" ")