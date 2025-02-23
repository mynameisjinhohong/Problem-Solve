def solution(points, routes):
    answer = 0
    robots = [points[routes[i][0]-1].copy() for i in range(len(routes))]
    robotIdx = [1 for _ in range(len(routes))]
    end = False
    while end == False:
        dic = dict()
        for i in range(len(robots)):
            if robotIdx[i] >= len(routes[0]):
                continue
            if robots[i] == points[routes[i][robotIdx[i]]-1]:
                robotIdx[i] += 1
            su = ','.join(str(i) for i in robots[i])
            if su in dic:
                if dic[su] == False:
                    dic[su] = True
                    answer += 1
            else:
                dic[su] = False
        for i in range(len(routes)):
            if robotIdx[i] < len(routes[0]):
                break
            if i == len(routes) -1:
                end = True
                break
        if end:
            break

                
    
        for i in range(len(robots)):
            if robotIdx[i] >= len(routes[0]):
                continue
            if robots[i][0] - points[routes[i][robotIdx[i]]-1][0] > 0:
                robots[i][0] -= 1
            elif points[routes[i][robotIdx[i]]-1][0] - robots[i][0] > 0:
                robots[i][0] += 1
            elif points[routes[i][robotIdx[i]]-1][1] - robots[i][1] > 0:
                robots[i][1] += 1
            elif robots[i][1] - points[routes[i][robotIdx[i]]-1][1] > 0:
                robots[i][1] -= 1

                
    return answer