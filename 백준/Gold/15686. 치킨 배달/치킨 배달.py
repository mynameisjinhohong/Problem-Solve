import sys
def Com(dap,li,su,start,end):
    if su == 0:
        dap.append(li.copy())
        return  dap
    if start > end:
        return  dap
    su -= 1
    for i in range(start,end):
        li.append(i)
        Com(dap,li,su,i+1,end)
        li.pop()
    if li == []:
        return dap


N,M = map(int,input().split())
home = []
chicken = []
homeChicken = []
for i in range(N):
    line = input().split()
    for j in range(N):
        if line[j] == "1":
            home.append([j,i])
        elif line[j] == "2":
            chicken.append([j,i])
for i in home:
    test = []
    for j in chicken:
        test.append(abs(j[0]-i[0])+abs(j[1]-i[1]))
    homeChicken.append(test)
com = Com([],[],M,0,len(chicken))
mini = sys.maxsize
for i in com:
    hap = 0
    for j in homeChicken:
        small = sys.maxsize
        for k in i:
            if small >j[k]:
                small = j[k]
        hap += small
    if hap < mini:
        mini = hap
print(mini)


