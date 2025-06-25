a = int(input())
b = list(map(int,input().split()))
ans = 0
for i in b:
    ans += i
    ans += 8
ans -= 8
print(ans//24,ans%24)