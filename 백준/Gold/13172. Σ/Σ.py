import math

m = int(input())
dap = 0
for i in range(m):
    n,s = map(int,input().split())
    dap += (pow(n,1000000005,1000000007)*s)%1000000007
print(dap%1000000007)
