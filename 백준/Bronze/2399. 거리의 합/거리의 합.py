a = int(input())
b = list(map(int,input().split()))
b.sort()
ans = 0
ans -= b[0] * (a-1)
ans += b[a-1] * (a-1)
for i in range(1,a-1):
    ans += b[i] * i
    ans -= b[i] * (a-1 - i)
print(ans*2)