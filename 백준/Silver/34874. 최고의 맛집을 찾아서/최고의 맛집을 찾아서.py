a,b = map(int,input().split())
ans = [0] * b
for i in range(a):
    c = list(map(int,input().split()))
    d = max(c)
    for j in range(b):
        if c[j] < d:
            ans[j] += 1
for i in ans:
    print(i,end =" ")