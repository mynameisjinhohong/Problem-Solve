from collections import deque

test = list(input())
boom = list(input())
Idx = 0
findBoom = False
hq = list()
while Idx < len(test):
    hq.append(test[Idx])
    Idx += 1
    if len(hq) >= len(boom):
        target = hq[-len(boom):]
        if target == boom:
            del hq[-len(boom):]
    else:
       continue 
if len(hq) > 0:
    print(''.join(hq))
else:
    print("FRULA")
