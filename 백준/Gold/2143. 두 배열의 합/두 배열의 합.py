t = int(input())
n = int(input())
a = list(map(int,input().split()))
m = int(input())
b = list(map(int,input().split()))
#누적합 리스트 제작
aList = [0]
bList = [0]
hap = 0
for i in a:
    hap += i
    aList.append(hap)
hap = 0
for i in b:
    hap += i
    bList.append(hap)
#모든 조합 딕셔너리 제작
aHapList = dict()
bHapList = dict()
for i in range(n+1):
    for j in range(i+1,n+1):
        if (aList[j]-aList[i]) in aHapList:
            aHapList[aList[j]-aList[i]] += 1
        else:
            aHapList[aList[j]-aList[i]] = 1
for i in range(m+1):
    for j in range(i+1,m+1):
        if (bList[j] - bList[i]) in bHapList:
            bHapList[bList[j] - bList[i]] += 1
        else:
            bHapList[bList[j] - bList[i]] = 1
# 각 딕셔너리끼리 조합 시작
ans = 0
for i in aHapList:
    if (t-i) in bHapList:
        ans += aHapList[i] * bHapList[t-i]
print(ans)