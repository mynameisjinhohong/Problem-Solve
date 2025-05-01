import heapq
import sys
input = sys.stdin.readline

def Check2(a):
    ans = 0
    check = 1
    idx = 0
    before = []
    while check <= a:
        if check & a == check:
            ans += 1 + ((check//2) * idx)
            before.append(check)
        check = check * 2
        idx += 1
    for i in range(len(before)):
        ans += before[i] * (len(before) - i - 1)
    return ans



n,m = map(int,input().split())
mPoint = Check2(m)
nPoint = Check2(n-1)

print(mPoint- nPoint)
