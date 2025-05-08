import heapq
import sys
input = sys.stdin.readline

G = int(input())
P = int(input())
board = [i for i in range(G+1)]
ans = 0
board[0] = 0
test = []
for i in range(P):
    su = int(input())
    test.append(su)
for i in range(P):
    su = test[i]
    path = [su]
    while True:
        if board[su] == su:
            for j in path:
                board[j] = board[su-1]
            break
        else:
            su = board[su]
            if su == 0:
                ans = i
                break
            path.append(su)
    if ans > 0:
        break
    if i == P-1:
        ans = P
print(ans)
