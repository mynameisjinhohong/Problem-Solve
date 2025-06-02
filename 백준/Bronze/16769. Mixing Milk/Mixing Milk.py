a,b = map(int,input().split())
c,d = map(int,input().split())
e,f = map(int,input().split())
idx = 0
for i in range(100):
    if idx == 0:
        d += b
        if d > c:
            b = d - c
            d = c
        else:
            b = 0
        idx += 1
    elif idx == 1:
        f += d
        if f >e:
            d = f - e
            f = e
        else:
            d = 0
        idx += 1
    elif idx == 2:
        b += f
        if b > a:
            f = b - a
            b = a
        else:
            f = 0
        idx = 0
print(b)
print(d)
print(f)