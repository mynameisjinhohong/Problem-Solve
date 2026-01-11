import math

a = int(input())
for i in range(a):
    b,c,d = map(int,input().split())
    now = b *15 + c* 20 + d * 25
    ans = math.ceil((9000 - now) * 0.025)
    if ans > 100:
        print("impossible")
    else:
        print(ans)