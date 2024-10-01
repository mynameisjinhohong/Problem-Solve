

n, m = map(int, input().split())
paper = []
for j in range(n):
    paperLine = []
    sus = list(map(int,input().split()))
    for i in sus:
        paperLine.append(i)
    paper.append(paperLine)
tet = []
#앞에가 x,뒤에가 y
tet.append([[0,-1,-2,-3],[0,0,0,0]])
tet.append([[0,0,0,0],[0,-1,-2,-3]])
#일직선
tet.append([[0,-1,0,-1],[0,0,-1,-1]])
#사각형
tet.append([[0,0,0,-1],[0,-1,-2,-2]])
tet.append([[0,0,-1,-2],[0,-1,0,0]])
tet.append([[0,-1,-1,-1],[0,0,-1,-2]])
tet.append([[0,-1,-2,-2],[0,0,0,1]])
tet.append([[0,-1,-1,-1],[0,0,1,2]])
tet.append([[0,0,-1,-2],[0,-1,-1,-1]])
tet.append([[0,0,0,-1],[0,-1,-2,0]])
tet.append([[0,-1,-2,-2],[0,0,0,-1]])
#꺾쇠
tet.append([[0,0,-1,-1],[0,-1,-1,-2]])
tet.append([[0,-1,-1,-2],[0,0,1,1]])
tet.append([[0,0,-1,-1],[0,-1,0,1]])
tet.append([[0,-1,-1,-2],[0,0,-1,-1]])
#뱀
tet.append([[0,-1,-1,-2],[0,0,-1,0]])
tet.append([[0,0,-1,0],[0,-1,-1,-2]])
tet.append([[0,-1,-1,-2],[0,0,1,0]])
tet.append([[0,-1,-1,-1],[0,1,0,-1]])
#뻐큐
dap = 0
for j in range(n):
    for i in range(m):
        for k in tet:
            hap = 0
            for l in range(4):
                x = k[0][l]
                y = k[1][l]
                if j-y < 0 or i -x <0 or j-y > n-1 or i-x>m-1:
                    hap = 0
                    break
                hap += paper[j-y][i-x]
            if hap > dap:
                dap = hap
print(dap)

