N,M = map(int,input().split())
truthLine = input()
truth = []
if int(truthLine[0]) > 0:
    splitT = truthLine.split()
    for i in range(1,int(truthLine[0])+1):
        truth.append(int(splitT[i]))
party = []
for i in range(M):
    line = list(map(int,input().split()))
    party.append(line[1:])
while True:
    end = True
    for i in party:
        if i[len(i)-1] == 0:
            continue
        for j in truth:
            if j in i:
                end = False
                for k in i:
                    if not k in truth:
                        truth.append(k)
                i.append(0)
                end = False
                break
    if end:
        break
dap = 0
for i in party:
    if i[len(i)-1] != 0:
        dap += 1
print(dap)