n = int(input())
ans = 0
for i in range(n):
    a,b = map(int,input().split())
    if a == 136:
        ans += 1000
    elif a == 142:
        ans += 5000
    elif a == 148:
        ans += 10000
    elif a == 154:
        ans += 50000
print(ans)
        