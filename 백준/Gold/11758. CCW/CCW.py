def CCW(x1,y1,x2,y2,x3,y3):
    return x1*y2+x2*y3+x3*y1-x1*y3-x3*y2-x2*y1

x1,y1 = map(int,input().split())
x2,y2 = map(int,input().split())
x3,y3 = map(int,input().split())
su = CCW(x1,y1,x2,y2,x3,y3)
if su > 0:
    print(1)
elif su == 0:
    print(0)
else:
    print(-1)



