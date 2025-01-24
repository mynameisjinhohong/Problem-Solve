import heapq
import sys
input = sys.stdin.readline

n,k = map(int,input().split())
jews = [] #무게,가격
for _ in range(n):
    jewl = list(map(int,input().split()))
    jews.append(jewl)
jews.sort(key = lambda x:x[0])
bags = []
for _ in range(k):
    bags.append(int(input()))
bags.sort()
ans = 0
jewIdx = 0
hubo = []
for i in bags:
    while jewIdx < len(jews):
       if jews[jewIdx][0] <= i:
           heapq.heappush(hubo, -1 * jews[jewIdx][1])
           jewIdx += 1
       else:
           break
    if len(hubo) > 0:
        ans -= heapq.heappop(hubo)
print(ans)