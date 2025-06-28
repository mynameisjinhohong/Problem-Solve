a = int(input())
b = int(input())
ans = 0
find = False
while(True):
    if ans - (ans // a) == b:
        if not find:
            find = True
            print(ans, end=" ")
            ans += 1
            continue
        else:
            ans += 1
    else:
        if find:
            print(ans - 1)
            break
        ans += 1