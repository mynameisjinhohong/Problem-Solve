a = int(input())
b = map(int,input().split())
ans = 0
for i in b:
    ans += i//2
    if i % 2 != 0:
        ans += 1
print(ans)