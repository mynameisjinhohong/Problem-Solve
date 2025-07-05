a,b = map(int,input().split())
people = list(map(int,input().split()))
ans = 0
for i in range(a):
    ans += people[i]-1
    if ans > b:
        break
if ans < b :
    print("OUT")
else:
    print("DIMI")
    