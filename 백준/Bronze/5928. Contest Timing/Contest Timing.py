a,b,c = map(int,input().split())
start = (11 * 1440) + (11*60) + 11
end = (a * 1440) + (b*60) + c
ans = end - start
if ans < 0:
    ans = -1
print(ans)