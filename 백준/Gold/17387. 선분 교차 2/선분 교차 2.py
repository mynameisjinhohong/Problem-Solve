def CCW(x1,y1,x2,y2,x3,y3):
    return x1*y2+x2*y3+x3*y1-x1*y3-x3*y2-x2*y1

x1,y1,x2,y2 = map(int,input().split())
x3,y3,x4,y4 = map(int,input().split())

a = CCW(x1,y1,x2,y2,x3,y3) * CCW(x1,y1,x2,y2,x4,y4)
b = CCW(x4,y4,x3,y3,x1,y1) * CCW(x4,y4,x3,y3,x2,y2)
if a == 0 and b == 0:
    if x1 == x2 == x3 == x4:
        if min(y1,y2) > max(y3,y4) or max(y1,y2) < min(y3,y4):
            print(0)
        else:
            print(1)
    else:
        if min(x1,x2) > max(x3,x4) or max(x1,x2) < min(x3,x4):
            print(0)
        else:
            print(1)
else:
    if a<= 0 and b<= 0:
        print(1)
    else:
        print(0)

