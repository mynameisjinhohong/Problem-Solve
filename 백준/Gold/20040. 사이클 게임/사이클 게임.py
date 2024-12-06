import sys
input = sys.stdin.readline

def CycleFind(a,b):
    global unionList
    first = a
    second = b
    while unionList[first] != first or unionList[second] != second:
        first = unionList[first]
        second = unionList[second]
    unionList[a] = first
    unionList[b] = second
    if first == second:
        return True
    else:
        return False
        
            
def Union(a,b):
    global unionList
    if unionList[a] < unionList[b]:
        unionList[unionList[b]] = unionList[a]
    else:
        unionList[unionList[a]] = unionList[b]


n,m = map(int,input().split())
unionList = [i for i in range(n)]
end = False
for i in range(m):
    a,b = map(int,input().split())
    if not end:
        if not CycleFind(a,b):
            Union(a,b)
        else:
            print(i+1)
            end = True
        if i == m -1 and not end:
            print(0)
