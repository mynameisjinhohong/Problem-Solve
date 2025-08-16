a,b,c = map(int,input().split())
test = dict()
for i in range(1,a+1):
    for j in range(1,b+1):
        for k in range(1,c+1):
            su = i+j+k
            if su in test:
                test[su] += 1
            else:
                test[su] = 1
best = 0
ans = 0
for i in range(3,a+b+c):
    if test[i] > best:
        ans = i
        best = test[i]
print(ans)