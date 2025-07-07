import sys

a,b,c,d = map(int,input().split())
ans = sys.maxsize
for i in range(c):
    x = int(input())
    li = list(map(int,input().split()))
    find = False
    for j in li:
        if j >= a:
            find = True
            break
    if find and x*a <= b:
        ans = min(ans,x*a)
if ans == sys.maxsize:
    print("stay home")
else:
    print(ans)