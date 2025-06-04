a = int(input())
ans = 1001
ansX = 0
for i in range(a):
    b,c = map(int,input().split())
    if c < ans:
        ansX = b
        ans = c
print(ansX,ans)