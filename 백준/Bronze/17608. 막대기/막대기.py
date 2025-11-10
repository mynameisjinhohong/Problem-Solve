import sys
input = sys.stdin.readline

a = int(input())
last = list()
test = int(input())
last.append(test)
for i in range(a-1):
    b = int(input())
    last.append(b)
ans = 0
big = 0
last = reversed(last)
for i in last:
    if i > big:
        ans += 1
        big = i
print(ans)
        