n = int(input())
a = list(map(int,input().split()))
m = int(input())
b = list(map(int,input().split()))
dap = []
while True:
    sortA = sorted(a,reverse=True)
    maxA = -1
    for i in sortA:
        if i in b:
            maxA = i
            break
    if maxA == -1:
        break
    dap.append(maxA)
    idxA = a.index(maxA)
    idxB = b.index(maxA)
    b = b[idxB+1:]
    a = a[idxA+1:]
print(len(dap))
for i in dap:
    print(i,end=" ")