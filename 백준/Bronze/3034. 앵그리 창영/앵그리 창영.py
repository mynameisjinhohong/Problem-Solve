import math
a,b,c = map(int,input().split())
hubo = math.sqrt(pow(b,2) + pow(c,2))
for i in range(a):
    d = int(input())
    if hubo >= d:
        print("DA")
    else:
        print("NE")