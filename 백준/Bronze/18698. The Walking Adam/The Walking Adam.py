a = int(input())
for i in range(a):
    b = input()
    ans = 0
    for j in b:
        if j == 'D':
            break
        else:
            ans += 1
    print(ans)