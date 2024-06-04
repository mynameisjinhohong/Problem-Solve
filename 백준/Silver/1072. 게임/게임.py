x,y = map(int,input().split())
z = (y*100)//x
if z >= 99:
    print(-1)
else:
    min = 1
    max = 1000000000
    while min <= max:
        i = (min + max)//2
        if z <((y+i)*100)//(x+i):
            max = i-1
        else:
            min = i +1
    if z <((y+i)*100)//(x+i):
        print(int(i))
    else:
        print(int(i)+1)