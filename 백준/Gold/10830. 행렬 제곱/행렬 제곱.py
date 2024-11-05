def Square(mat,Su):
    if Su == 1:
        return mat
    elif Su == 2:
        return  MatMat(mat,mat)
    else:
        if Su%2 == 0:
            next = Square(mat,Su//2)
            next = MatMat(next,next)
            return  next
        else:
            next = Square(mat,Su//2)
            next = MatMat(next,next)
            next = MatMat(next,mat)
            return next



def MatMat(mat,nextMat):
    newMat = [[0 for _ in range(len(mat))]for _ in range(len(mat))]
    for i in range(len(mat)):
        for j in range(len(mat)):
            su = 0
            for k in range(len(mat)):
                su += mat[i][k] * nextMat[k][j]
            newMat[i][j] = su % 1000
    return newMat

N,B = map(int,input().split())
matrix = []
for i in range(N):
    matrix.append(list(map(int,input().split())))
matrix = Square(matrix,B)
for i in range(N):
    for j in range(N):
        if matrix[i][j] < 1000:
            print(matrix[i][j],end=' ')
        else:
            print(matrix[i][j]%1000,end=' ')
    print()