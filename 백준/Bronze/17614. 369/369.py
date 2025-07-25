a = int(input())
ans = 0
for i in range(1,a+1):
    su = str(i)
    for j in su:
        if j == '3' or j == '6' or j =='9':
            ans += 1
print(ans)