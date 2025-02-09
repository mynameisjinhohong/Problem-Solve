a,b,c,d,e,f = map(int,input().split())
x = -999
y = -999
for i in range(1999):
    for j in range(1999):
        if a*(x+i)+b*(y+j) == c and d*(x+i)+e*(y+j) == f:
            x = x+i
            y = y+j
            break
print(x,y)