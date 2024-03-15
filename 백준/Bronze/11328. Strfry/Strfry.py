su = int(input())
for i in range(su):
    a,b = input().split(' ')
    dap = True
    if len(a) != len(b):
        print('Impossible')
    else :
        c = []
        dap = True
        for j in a:
            if j in c:
                continue
            elif a.count(j) != b.count(j):
                print('Impossible')
                dap = False
                break
            else:
                c.append(j)
        if dap:
            print('Possible')