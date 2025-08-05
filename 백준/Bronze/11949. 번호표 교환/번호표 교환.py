a,b = map(int,input().split())
li = list()
for i in range(a):
    li.append(int(input()))
for i in range(1,b+1):
    for j in range(a-1):
        if li[j]% i > li[j+1] % i:
            su = li[j]
            li[j] = li[j+1]
            li[j+1] = su
for i in li:
    print(i)