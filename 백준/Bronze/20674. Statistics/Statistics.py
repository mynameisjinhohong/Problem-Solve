A = int(input())
mi = 10000
ans = 0
for i in range(A):
    b = int(input())
    if b < mi:
        mi = b
    else:
        ans +=b - mi
print(ans)