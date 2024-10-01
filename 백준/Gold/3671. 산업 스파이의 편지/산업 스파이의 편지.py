import itertools
import math

""" #재귀형태로 풀려했던 흔적
def find(before,n):
    global  dap
    global  done
    if before in done:
        return
    if before in dicTest:
        dap += 1
    done.append(before)
    if len(n)<1:
        return
    for i in range(len(n)):
        su = before*10 + int(n[i])
        n2 = n.copy()
        del n2[i]
        find(su,n2)
"""
""" #다중For문으로 해볼라다가 포기
def find2(target,le):
    global  dicTest
    global  dap
    global  done
    for i in range(len(target)):
        before = target[i]
        target2 = target.copy()
        del target2[i]
        if before not in done:
            if before in dicTest:
                dap += 1
                done[before] = before
        for j in range(le):
            for k in range(len(target2)):
                before = before * 10 + target2[k]
                del target2[k]
                if before not in done:
                    if before in dicTest:
                        dap += 1
                        done[before] = before
"""

prime = []
for i in range(10000000):
    prime.append(True)
for i in range(2,len(prime)):
    if prime[i] == True:
        first = True
        for j in range(i,len(prime),i):
            if first == True:
                first = False
            else:
                prime[j] = False
prime[0] = False
prime[1] = False
# 여기까지가 채
su = int(input())
for i in range(su):
    target = list(input())
    dap = 0
    save = []
    for j in range(len(target)):
        test = set(list(itertools.permutations(target,j+1)))
        for k in test:
            testSu = ''
            for l in k:
                testSu += l
            if (prime[int(testSu)]) == True and (int(testSu) not in save):
                dap += 1
                save.append(int(testSu))

    print(dap)
