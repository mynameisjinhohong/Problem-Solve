a,b,c = map(int,input().split())
if c * b  < (c * (100 - a) * (b+1))//100:
    print(c*b)
else:
    print((c * (100 - a) * (b+1))//100)