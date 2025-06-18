a = input()
b = input().split()
ans = 0
for i in b:
    if i == a:
        ans += 1
print(ans)