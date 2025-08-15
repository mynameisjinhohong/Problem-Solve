def check(target):
    global test,idx,ans
    if target == test[idx]:
        idx += 1
        if idx == 4:
            idx = 0
            ans += 1 
    else:
        idx = 0

a = input()
ans = 0
test = ['k','i','c','k']
idx = 0
for i in a:
    check(i)
    if idx == 0:
        check(i)
print(ans)