a = int(input())
li = list(map(int,input().split()))
ans = 0
before = li[0]
for i in range(1,a):
    if li[i] <= li[i-1]:
        high = False
        ans = max(li[i-1] - before,ans)
        before = li[i]
ans = max(li[a-1]-before,ans)
print(ans)