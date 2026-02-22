a,b = map(int,input().split())
c,d = map(int,input().split())
e,f = map(int,input().split())
if (c+d)%2 == (e+f)%2:
    print("YES")
else:
    print("NO")