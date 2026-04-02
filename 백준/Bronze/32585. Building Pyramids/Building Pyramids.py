a = int(input())
ans = 0
su = 0
for i in range(1,a+1):
    su += i
    ans += su
print(ans)