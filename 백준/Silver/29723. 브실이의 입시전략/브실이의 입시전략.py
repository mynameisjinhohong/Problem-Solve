a,b,c = map(int,input().split())
di = dict()
li = list()
for i in range(a):
    d,e = input().split()
    di[d] = int(e)
    li.append(int(e))
su = b - c
miAns = 0
maAns = 0
for i in range(c):
    f = input()
    miAns += di[f]
    maAns += di[f]
    li.remove(di[f])
li.sort()
for i in range(su):
    miAns += li[i]
    maAns += li[len(li) - 1 - i]
print(miAns,maAns)