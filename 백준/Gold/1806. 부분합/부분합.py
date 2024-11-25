n,s = map(int,input().split())
line = list(map(int,input().split()))
hap = line[0]
start = 0
end = 0
dap = 100001
while start < n:
    if hap < s and end < n-1:
        end += 1
        if end < n:
            hap += line[end]
    else:
        if hap >= s:
            if dap > end - start + 1:
                dap = end - start + 1
        hap -= line[start]
        start += 1
    if dap == 1:
        break
if dap > 100000:
    print(0)
else:
    print(dap)
        

