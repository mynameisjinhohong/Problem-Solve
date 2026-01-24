import math

a = int(input())
ansA = 0
ansB = 0
sus = list()
for i in range(a):
    b, c = map(int, input().split())
    sus.append([b, c])
mi = math.inf
for i in range(1, 101):
    for j in range(1, 101):
        su = 0
        for k in range(a):
            su += math.pow(sus[k][1] - (i * sus[k][0] + j), 2)
        if su < mi:
            mi = su
            ansA = i
            ansB = j
print(ansA,ansB)
