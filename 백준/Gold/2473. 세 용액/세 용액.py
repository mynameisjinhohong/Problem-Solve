import sys


n = int(input())
sol = list(map(int,input().split()))
sol.sort()
ans = sys.maxsize
ansSu = []
for i in range(n):
    start = 0
    end = n-1
    if i == 0:
        i = 1
    if i == n-1:
        end = n-2
    while start < end:
        hap = sol[start]+sol[i]+sol[end]
        if abs(hap) < ans:
            ans = abs(hap)
            ansSu = [sol[start],sol[i],sol[end]]
        if hap < 0:
            start += 1
            if start == i:
                start += 1
        else:
            end -= 1
            if end == i:
                end -= 1
ansSu.sort()
for i in ansSu:
    print(i,end=" ")