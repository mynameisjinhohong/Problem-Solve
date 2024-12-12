a = int(input())
ans = 0
for i in range(1,a+1):
    ans += (i+(i*2))*(i+1)//2
print(ans)
