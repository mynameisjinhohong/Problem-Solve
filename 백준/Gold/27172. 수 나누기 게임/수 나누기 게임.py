n = int(input())
cards = list(map(int,input().split()))
ans = dict() 
all = [False for _ in range(1000001)]
for i in cards:
    ans[i] = 0
    all[i] = True
for i in range(n):
    su = cards[i]
    idx = 1
    while su*(idx+1) <= 1000000:
        idx += 1
        if all[su*idx]:
            ans[cards[i]] += 1
            ans[su*idx] -= 1
for i in ans:
    print(ans[i],end=" ")