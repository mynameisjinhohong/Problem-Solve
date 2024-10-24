from collections import deque

def listCompress(line):
    newList = []
    for i in line:
        if len(i) > 0:
            newList.append(i)
    return  newList

line = list(map(lambda x : [x],map(ord, list(input()))))
# + = 43 , * = 42, - = 45, / = 47, ( = 40, ) = 41, A = 65, Z = 90
while True:
    if len(line)<2:
        break
    ''' 
    for i in line:
        for j in i:
            print((chr(j)),end="")
    print()
    '''
    # 가장 작은 그룹들 먼저 묶어주기 - 수*수,수/수,()인데 사이에 3개만 들어간 애들 즉 서로 인덱스 차이가 4인 애들
    doPlus = True #곱,나누기,괄호로 가장 작은 애들이 다 갈렸다 싶으면 그때 더하기 빼기 해주기
    lastSuIdx = 0
    lastSignIdx = -1
    lastLeftIdx = -1 #마지막으로 나온 왼쪽 괄호
    for i in range(len(line)): #곱하기 나누기 체크
        target = line[i]
        if target[0] <= 90 and target[0] >= 65:  # 오브젝트라면
            if i - lastSuIdx == 2 and i - lastSignIdx == 1:
                line[lastSuIdx].extend(line[i])
                line[lastSuIdx].extend(line[lastSignIdx])
                line[i] = []
                line[lastSignIdx] = []
                doPlus = False
                break
            else:
                lastSuIdx = i
                continue
        if target[0] == 42 or target[0] == 47:  # 곱하기나 나누기라면
            lastSignIdx = i
            continue
        #위에가 곱하기 나누기 체크,아래가 괄호 체크
        if target[0] == 40:
            lastLeftIdx = i
            continue
        if target[0] == 41:
            line[lastLeftIdx] = []
            line[i] = []
            for j in range(i-lastLeftIdx-2):
                if j%2 == 0:
                    line[lastLeftIdx+1].extend(line[lastLeftIdx+j+3])
                    line[lastLeftIdx+j+3] = []
                else:
                    line[lastLeftIdx+1].extend(line[lastLeftIdx+j+1])
                    line[lastLeftIdx+j+1] = []
            doPlus = False
            break
    if doPlus: #덧셈 뺄셈 할 시간
        lastSuIdx = 0
        lastSignIdx = -1
        for i in range(len(line)):  # 곱하기 나누기 체크
            target = line[i]
            if target[0] <= 90 and target[0] >= 65:  # 오브젝트라면
                if i - lastSuIdx == 2 and i - lastSignIdx == 1:
                    line[lastSuIdx].extend(line[i])
                    line[lastSuIdx].extend(line[lastSignIdx])
                    line[i] = []
                    line[lastSignIdx] = []
                    break
                else:
                    lastSuIdx = i
                    continue
            if target[0] == 43 or target[0] == 45:  # 곱하기나 나누기라면
                lastSignIdx = i
        line = listCompress(line)
    else:
        line = listCompress(line)
for i in map(chr,line[0]):
    print(i,end="")
