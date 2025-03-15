from  collections import  deque
import sys
input = sys.stdin.readline

n,l,r = map(int,input().split())
country = []
for _ in range(n):
    line = list(map(int,input().split()))
    country.append(line)
dx = [0,0,1,-1]
dy = [1,-1,0,0]
end = False
ans = 0
while True:
    end = True
    union = [i for i in range(n * n)]
    for y in range(n):
        for x in range(n):
            if union[x+y*n] == x+y*n:
                dq = deque()
                dq.append(y*n + x)
                while len(dq) > 0:
                    target = dq.popleft()
                    for k in range(4):
                        newx = target%n + dx[k]
                        newy = target//n + dy[k]
                        if 0 <= newx < n and 0 <= newy < n and union[newx+newy*n] != union[target]:
                            if l <= abs(country[target//n][target%n] - country[newy][newx]) <= r:
                                end = False
                                union[newx + newy * n] = union[target]
                                dq.append(newx + newy*n)
    if end:
        break
    else:
        ans += 1
        dic = dict()
        for i in range(n*n):
            if union[i] in dic:
                dic[union[i]][0] += country[i//n][i%n]
                dic[union[i]][1] += 1
            else:
                dic[union[i]] = [country[i//n][i%n] ,1]
        for i in range(n*n):
            country[i//n][i%n] = dic[union[i]][0] // dic[union[i]][1]
print(ans)