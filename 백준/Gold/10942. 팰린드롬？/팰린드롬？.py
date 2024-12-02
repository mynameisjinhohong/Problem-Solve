import sys
input = sys.stdin.readline
print = sys.stdout.write

def pel(start,end):
    global lines
    for i in range((end-start)//2):
        if lines[start + i] == lines[end-i]:
            continue
        else:
            return 0
    return 1

n = int(input())
lines = list(map(int,input().split()))
hap = [[0 for _ in range(n)] for _ in range(n)]
'''
for i in range(n):
    hap[i][i] = 1
for i in range(1,n):
    if lines[0] == lines[i]:
        su = pel(0,i)
        if su == 1:
            idx = 0
            while True:
                hap[idx][i-idx] = 1
                idx += 1
                if idx > i- idx:
                    break
for i in range(n):
    if lines[n-1] == lines[i]:
        su = pel(i,n-1)
        if su == 1:
            idx = 0
            while True:
                hap[i+idx][n-1-idx] = 1
                idx += 1
                if i+idx > n-1-idx:
                    break
'''
for i in range(n):
    for j in range(min(i+1,n-i)):
        if lines[i+j] == lines[i-j]:
            hap[i-j][j+i] = 1
        else:
            break
    if i < n-1:
        if lines[i] == lines[i+1]:
            hap[i][i+1] = 1
        else:
            continue
    for j in range(min(i+1,n-i-1)):
        if lines[i+j+1] == lines[i-j]:
            hap[i-j][i+j+1] = 1
        else:
            break

    
m = int(input())
for _ in range(m):
    s,e = map(int,input().split())
    print(str(hap[s-1][e-1])+"\n")
