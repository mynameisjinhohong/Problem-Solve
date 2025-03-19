import heapq

n = int(input())
li = list()
for _ in range(n):
    heapq.heappush(li,int(input()))
ans = 0
while len(li) > 1:
    su = heapq.heappop(li) + heapq.heappop(li)
    ans += su
    heapq.heappush(li,su)
print(ans)