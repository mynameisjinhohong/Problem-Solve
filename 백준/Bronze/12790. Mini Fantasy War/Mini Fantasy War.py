a = int(input())
for i in range(a):
    a,b,c,d,a1,b1,c1,d1 = map(int,input().split())
    print(max(a+a1,1) + (5 * max(b+b1,1)) + (2 * max(c+c1,0)) + (2 * (d+d1)))