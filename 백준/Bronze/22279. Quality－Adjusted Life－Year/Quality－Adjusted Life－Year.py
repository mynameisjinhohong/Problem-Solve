a = int(input())
ans = 0
for i in range(a):
    b,c = map(float,input().split())
    ans += b*c
print(ans)