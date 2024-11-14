N = int(input())
task = []
for _ in range(N):
    nowTask = list(map(int,input().split()))
    maxGap = 0
    for i in range(nowTask[1]):
        if task[nowTask[i+2]-1] > maxGap:
            maxGap = task[nowTask[i+2]-1]
    maxGap += nowTask[0]
    task.append(maxGap)
print(max(task))
