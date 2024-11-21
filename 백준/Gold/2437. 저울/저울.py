N = int(input())
chu = list(map(int,input().split()))
chu.sort()
end = 0
for i in chu:
    if i-1 > end:
        break
    end += i
print(end+1)