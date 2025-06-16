a,b,c,d = map(int,input().split())
ans = 0
find = False
for i in range(1,c):
    if (i * a) + ((c-i) * b) == d:
        ans = i
        if find:
            ans = 0
        find = True
        
if ans == 0:
    print(-1)
else:
    print(ans,c-ans)