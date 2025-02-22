def Find(diffs,times,limit,lev):
    hap = 0
    for i in range(len(diffs)):
        if diffs[i] <= lev:
            hap += times[i]
        else:
            hap += times[i] + ((times[i-1]+times[i])*(diffs[i]-lev))
    return hap

def solution(diffs, times, limit):
    answer = 1
    start = 1
    end = limit
    middle = 0
    while end - start > 1:
        middle = (start + end)//2
        su = Find(diffs,times,limit,middle)
        if su > limit:
            start = middle
        elif su < limit:
            end = middle
        else:
            answer = middle
            break
    if answer != middle:
        print(Find(diffs,times,limit,start))
        if Find(diffs,times,limit,start) > limit:
            answer = end
            print("start",start,end)
        else:
            answer = start
            print("end",start,end)
    return answer