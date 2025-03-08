N = int(input())
ans = "S"
best = 0
for i in range(N):
    if i == 0:
        best = int(input())
    else:
        su = int(input())
        if su > best:
            ans = "N"
print(ans)