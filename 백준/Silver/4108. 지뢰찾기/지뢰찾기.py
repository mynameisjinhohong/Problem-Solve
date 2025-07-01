while(True):
    a,b = map(int,input().split())
    if a == 0 and b == 0:
        break
    maps = []
    ans = []
    maps.append(['.'for i in range(b+2)])
    for i in range(a):
        line = ['.']
        for j in input():
            line.append(j)
        line.append('.')
        maps.append(line)
    maps.append(['.'for i in range(b+2)])
    test = [-1,0,1]
    for i in range(1,a+1):
        line = []
        for j in range(1,b+1):
            if maps[i][j] == '.':
                su = 0
                for k in range(3):
                    for l in range(3):
                        if maps[i + test[k]][j+test[l]] == '*':
                            su += 1
                line.append(su)
            else:
                line.append('*')
        ans.append(line)
    for i in ans:
        for j in i:
            print(j,end="")
        print()
