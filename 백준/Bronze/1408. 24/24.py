a,b,c = map(int,input().split(":"))
d,e,f = map(int,input().split(":"))
if f < c:
    f += 60
    e -= 1
if e < b:
    e += 60
    d -= 1
if d < a:
    d += 24
print(format(d-a,'02'),format(e-b,'02'),format(f-c,'02'),sep=':')
