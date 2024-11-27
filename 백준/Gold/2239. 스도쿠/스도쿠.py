def Find(x,y):
    global sdoku,hor,ver,box,find
    newx = x+1
    newy = y
    if newx > 8:
        newx = 0
        newy += 1
    if y > 8:
        find = True
        return
    if sdoku[y][x] > 0:
        Find(newx,newy)
    else:
        for i in range(1,10):
            if not hor[y][i] and not ver[x][i] and not box[x//3 + y//3*3][i]:
                hor[y][i] = True
                ver[x][i] = True
                box[x//3 + y//3*3][i] = True
                sdoku[y][x] = i
                Find(newx,newy)
                if find:
                    break
                hor[y][i] = False
                ver[x][i] = False
                box[x//3 + y//3*3][i] = False
                sdoku[y][x] = 0
        return
        
        


sdoku = [list(map(int,input().rstrip())) for _ in range(9)]
hor = [{1:False,2:False,3:False,4:False,5:False,6:False,7:False,8:False,9:False} for _ in range(9)]
ver = [{1:False,2:False,3:False,4:False,5:False,6:False,7:False,8:False,9:False} for _ in range(9)]
box = [{1:False,2:False,3:False,4:False,5:False,6:False,7:False,8:False,9:False} for _ in range(9)]
find = False
for i in range(9):
    for j in range(9):
        if sdoku[i][j] > 0:
            su = sdoku[i][j]
            hor[i][su] = True
            ver[j][su] = True
            box[j//3 + i//3*3][su] = True
Find(0,0)
for i in sdoku:
    for j in i:
        print(j,end="")
    print()