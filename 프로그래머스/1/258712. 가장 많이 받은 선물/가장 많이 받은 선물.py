def solution(friends, gifts):
    li = list() #이번달 주고 받은 선물
    dic = dict() #선물지수
    dap = dict() #다음달 주고받는선물
    for i in range(len(friends)):
        dic[friends[i]] = 0
        dap[friends[i]] = 0
        for j in range(i+1,len(friends)):
            li.append([friends[i],friends[j],0,0])
    for i in gifts:
        fri = i.split()
        idx = 0
        dic[fri[0]] += 1
        dic[fri[1]] -= 1
        for j in li:
            if fri[0] in j and fri[1] in j:
                if fri[0] == j[0]:
                    j[2] += 1
                elif fri[0] == j[1]:
                    j[3] += 1
    answer = 0
    for i in li:
        if i[2] > i[3]:
            dap[i[0]] += 1
        elif i[2] < i[3]:
            dap[i[1]] += 1
        else:
            if dic[i[0]] > dic[i[1]]:
                dap[i[0]] += 1
            elif dic[i[0]] < dic[i[1]]:
                dap[i[1]] += 1
    for i in dap:
        if dap[i] > answer:
            answer = dap[i]
    return answer