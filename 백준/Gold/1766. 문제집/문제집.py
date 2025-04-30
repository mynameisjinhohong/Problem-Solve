import heapq

n,m = map(int,input().split())
parent = [[] for i in range(n+1)]
child = [[] for i in range(n+1)]
for _ in range(m):
    a,b = map(int,input().split())
    child[a].append(b)
    parent[b].append(a)
ans = []
for i in range(1,n+1):
    if len(parent[i]) < 1:
        heapq.heappush(ans,i)
while len(ans) > 0:
    su = heapq.heappop(ans)
    print(su,end=" ")
    for i in child[su]:
        parent[i].remove(su)
        if len(parent[i]) < 1:
            heapq.heappush(ans,i)
