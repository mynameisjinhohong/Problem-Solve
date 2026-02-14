while(True):
    try:
        dots = list(map(float,input().split()))
        one = (0,0)
        dot = []
        for i in range(4):
            su = (dots[i*2],dots[i*2+1])
            if su in dot:
                one = su
                dot.remove(su)
            else:
                dot.append(su)
        x = dot[1][0] - one[0] + dot[0][0]
        y = dot[1][1] - one[1] + dot[0][1]
        print('%.3f %.3f'%(x,y))
    except:
        break