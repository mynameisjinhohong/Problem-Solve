a = int(input())
ans = 0
for i in range(a):
    b = input()
    if b[0] == 'C':
        ans += 1
print(ans)