a,b = map(int,input().split())
c = int(input())
if a*b % 12 == 0:
    print((int(a*b/12)*c))
else:
    print(int((int(a*b/12)+1)*c))