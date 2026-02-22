a,b = map(int,input().split())
c,d = map(int,input().split())
e,f = map(int,input().split())
if a == 1 or b == 1:
    if c == e and d == f:
        print("YES")
    else:
        print("NO")
else:
    if (c+d)%2 == (e+f)%2:
        print("YES")
    else:
        print("NO")