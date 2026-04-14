a = int(input())
for i in range(a):
    n = int(input())
    q,w,e,r,t,y = map(int,input().split())
    hap = q + w + e + r + t + y
    ans = 1
    while hap <= n:
        ans += 1
        hap *= 4
    print(ans)