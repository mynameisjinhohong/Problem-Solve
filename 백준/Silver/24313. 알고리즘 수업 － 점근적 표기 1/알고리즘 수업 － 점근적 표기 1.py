a1,a2 = map(int,input().split())
c = int(input())
n = int(input())

if c > a1:
    if a1 *n + a2 <= c * n:
        print(1)
    else:
        print(0)
elif c == a1:
    if a2 <= 0:
        print(1)
    else:
        print(0)
else:
    print(0)