from collections import deque
import sys
input = sys.stdin.readline

class Data:
    def __init__(self,start,route):
        self.now = start
        self.route = route

def Find(start,end):
    target = end
    qu = deque()
    qu.append(start)
    dap = Data(0,'')
    visited = dict()
    visited[start.now] = True
    while True:
        check = qu.pop()

        # D 체크
        data1 = Data(D(check.now),check.route)
        data1.route += 'D'
        if not data1.now in visited:
            qu.appendleft(data1)
            visited[data1.now] = True
            if data1.now == target:
                dap.now = data1.now
                dap.route = data1.route
                break

        # S 체크
        data2 = Data(S(check.now),check.route)
        data2.route += 'S'
        if not data2.now in visited:
            qu.appendleft(data2)
            visited[data2.now] = True
            if data2.now == target:
                dap.now = data2.now
                dap.route = data2.route
                break

        # L 체크
        data3 = Data(L(check.now),check.route)
        data3.route += 'L'
        if not data3.now in visited:
            qu.appendleft(data3)
            visited[data3.now] = True
            if data3.now == target:
                dap.now = data3.now
                dap.route = data3.route
                break

        #R 체크
        data4 = Data(R(check.now),check.route)
        data4.route += 'R'
        if not data4.now in visited:
            qu.appendleft(data4)
            visited[data4.now] = True
            if data4.now == target:
                dap.now = data4.now
                dap.route = data4.route
                break
    return dap.route
def D(target):
    ret = (target*2)%10000
    return ret

def S(target):
    ret = int(target) - 1
    if ret < 0:
        ret = 9999
    return ret

def L(target):
    ret = target * 10
    if ret > 9999:
        end = ret // 10000
        ret += end
        ret -= end * 10000
    return ret

def R(target):
    ret = target
    end = ret % 10
    ret = ret //10
    ret += 1000 * end
    return ret

T = int(input())
for i in range(T):
    A,B = map(int,input().split())
    print( Find(Data(A,''),B) )