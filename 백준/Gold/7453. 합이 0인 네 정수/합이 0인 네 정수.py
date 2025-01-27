import sys
input = sys.stdin.readline

n = int(input())
a =[]
b = []
c = []
d = []
aD = dict()
bD = dict()
cD = dict()
dD = dict()
ans = 0
for _ in range(n):
    a1,b1,c1,d1 = map(int,input().split())
    a.append(a1)
    b.append(b1)
    c.append(c1)
    d.append(d1)
hap = []
check = dict()
#12,34
for i in range(n):
    for j in range(n):
        hap.append(a[i] + b[j])
        if (c[i]+d[j]) in check:
            check[(c[i]+d[j])] += 1
        else:
            check[(c[i]+d[j])] = 1
for i in hap:
    if -i in check:
        ans += check[-i]
print(ans)
'''
#12,34
hap1 = []
hap2 = []
for i in range(n):
    for j in range(n):
        if a[i] + b[j] == 0:
            st = str(i) + " " + str(j)
            hap1.append(st)
        if c[i]+d[j] == 0:
            st = str(i) + " " + str(j)
            hap2.append(st)
for i in range(len(hap1)):
    for j in range(len(hap2)):
        st = hap1[i] + " " + hap2[j]
        if not st in check:
            check[st] = True
            ans += 1

#13,24
hap1 = []
hap2 = []
for i in range(n):
    for j in range(n):
        if a[i] + c[j] == 0:
            st = str(i) + " " + str(j)
            hap1.append(st)
        if b[i]+d[j] == 0:
            st = str(i) + " " + str(j)
            hap2.append(st)
for i in range(len(hap1)):
    for j in range(len(hap2)):
        st = hap1[i].split()[0] + " " + hap2[j].split()[0] + " " + hap1[i].split()[1] + hap2[j].split()[1]
        if not st in check:
            check[st] = True
            ans += 1
#14,23
hap1 = []
hap2 = []
for i in range(n):
    for j in range(n):
        if a[i] + d[j] == 0:
            st = str(i) + " " + str(j)
            hap1.append(st)
        if b[i]+c[j] == 0:
            st = str(i) + " " + str(j)
            hap2.append(st)
for i in range(len(hap1)):
    for j in range(len(hap2)):
        st = hap1[i].split()[0] + " " + hap2[j].split()[0] + " " + hap2[j].split()[1] + hap1[i].split()[1]
        if not st in check:
            check[st] = True
            ans += 1
'''


