import sys
n = int(input())
dpa = [[0,0,0] for _ in range(n-1)]
dpb = [[0,0,0] for _ in range(n-1)]
dpc = [[0,0,0] for _ in range(n-1)]
A,B,C = map(int,input().split())
for i in range(n-1):
    a,b,c = map(int,input().split())
    if i == 0:
        dpa[0] = [sys.maxsize,A+b,A+c]
        dpb[0] = [B+a,sys.maxsize,B+c]
        dpc[0] = [C+a,b+C,sys.maxsize]
    else:
        dpa[i][0] = min(dpa[i-1][1],dpa[i-1][2]) + a
        dpa[i][1] = min(dpa[i-1][0],dpa[i-1][2]) + b
        dpa[i][2] = min(dpa[i-1][0],dpa[i-1][1]) + c

        dpb[i][0] = min(dpb[i-1][1],dpb[i-1][2]) + a
        dpb[i][1] = min(dpb[i-1][0],dpb[i-1][2]) + b
        dpb[i][2] = min(dpb[i-1][0],dpb[i-1][1]) + c

        dpc[i][0] = min(dpc[i-1][1],dpc[i-1][2]) + a
        dpc[i][1] = min(dpc[i-1][0],dpc[i-1][2]) + b
        dpc[i][2] = min(dpc[i-1][0],dpc[i-1][1]) + c

print(min(dpa[n-2][1],dpa[n-2][2],dpb[n-2][0],dpb[n-2][2],dpc[n-2][0],dpc[n-2][1]))

