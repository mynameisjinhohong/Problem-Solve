n = int(input())
ans = 0
#에라토스테네스의 채
net = [True for _ in range(n+1)]
net[0] = False
net[1] = False
for i in range(n+1):
    if net[i] == False:
        continue
    else:
        idx = 2
        while True:
            if i*idx > n:
                break
            net[i*idx] = False
            idx += 1
prime = []
idx = 0
for i in net:
    if i:
        prime.append(idx)
    idx += 1
#투포인터
start = 0
end = 0
if len(prime) > 0:
    hap = prime[0]
    while True:
        if end == len(prime)-1 and hap < n:
            break
        if hap < n:
            end += 1
            hap += prime[end]
        elif hap == n:
            hap -= prime[start]
            start += 1
            ans += 1
        else:
            hap -= prime[start]
            start += 1
print(ans)