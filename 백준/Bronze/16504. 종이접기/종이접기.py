a = int(input())
ans = 0
for i in range(a):
    b = list(map(int,input().split()))
    for j in b:
        ans += j
print(ans)