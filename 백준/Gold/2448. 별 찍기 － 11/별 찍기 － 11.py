import math

def smallTriangle():
    testField = [[' ' for _ in range(5)] for _ in range(3)]
    testField[0][2] = '*'
    testField[1][3] = '*'
    testField[1][1] = '*'
    for i in range(5):
        testField[2][i] = '*'
    return testField

def bigTriangle(beforeField,idx):
    testField = [[' ' for _ in range(3*2**(idx+1)-1)] for _ in range(3*2**(idx))]
    for i in range(len(beforeField)):
        for j in range(len(beforeField[0])):
            testField[i][3*2**(idx-1)+j] = beforeField[i][j]

        
    for i in range(len(beforeField)):
        for j in range(len(beforeField[0])):
            testField[i+len(beforeField)][j+len(beforeField[0])+1] = beforeField[i][j]


    for i in range(len(beforeField)):
        for j in range(len(beforeField[0])):
            testField[i+len(beforeField)][j] = beforeField[i][j]


    return testField


N = int(input())
beforeField = smallTriangle()
idx = int(math.log2(N//3))
for i in range(idx):
    beforeField = bigTriangle(beforeField,i+1)
for i in range(N):
    print(''.join(beforeField[i]))