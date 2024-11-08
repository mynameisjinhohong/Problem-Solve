def FindBig(lines):
    dp = [1 for i in range(len(lines))]
    for i in range(len(lines)):
        for j in range(i):
            if lines[i] > lines[j]:
                dp[i] = max(dp[i],dp[j] + 1)
    return dp



n = int(input())
line = list(map(int,input().split()))
dap = 0
first = FindBig(line)
line.reverse()
second = FindBig(line)
second.reverse()
end = []
for i in range(n):
    end.append(first[i] + second[i])
for i in end:
    if i > dap:
        dap = i
print(dap-1)