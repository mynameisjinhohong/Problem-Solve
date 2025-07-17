a = int(input())
idx = 0
ans = 0
while(idx < a):
    idx += 1
    if(a % idx == 0):
        ans += idx
print(ans)