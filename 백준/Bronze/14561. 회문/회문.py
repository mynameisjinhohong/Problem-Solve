def ChangeAndCheck(a,b):
    #진법 변환
    ans = list()
    remain = a
    su = 1
    while(su < remain):
        su *= b
    su //= b
    while(su != 1):
        ans.append(remain//su)
        remain = remain %su
        su //= b
    ans.append(remain)
    #팰린드롬
    for i in range(len(ans)//2):
        if ans[i] != ans[len(ans)-i-1]:
            return 0
    return 1



a = int(input())
for i in range(a):
    b,c = map(int,input().split())
    print(ChangeAndCheck(b,c))

