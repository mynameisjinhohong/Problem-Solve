import sys
input = sys.stdin.readline

def UnionFind(one,two):
    global union
    first = one
    second = two
    while True:
        if union[first] == first and union[second] == second:
            break
        first = union[first]
        second = union[second]
    union[one] = first
    union[two] = second
    return [first != second,first,second]

n,m = map(int,input().split())
dap = 0
union = [i for i in range(n)]
lines = [list(map(int,input().split())) for _ in range(m)]
lines.sort(key= lambda x : x[2],reverse=True)
lineSu = 0
lineMax = 0
while lineSu < n-1:
    target = lines.pop()
    gap = UnionFind(target[0]-1,target[1]-1)
    if gap[0]:
        if gap[1] < gap[2]:
            union[gap[2]] = union[gap[1]]
        else:
            union[gap[1]] = union[gap[2]]
        dap += target[2]
        lineMax = target[2]
        lineSu += 1
print(dap - lineMax)