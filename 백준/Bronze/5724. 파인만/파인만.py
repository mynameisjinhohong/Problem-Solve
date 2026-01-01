while(True):
    a = int(input())
    if a == 0:
        break
    ans = 0
    for i in range(a):
        ans += (a-i)*(a-i)
    print(ans)