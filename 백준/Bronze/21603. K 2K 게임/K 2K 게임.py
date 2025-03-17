n,k = map(int,input().split())
li = list()
for i in range(1,n+1):
    if not(i %10 == k%10 or i%10 == k*2 %10):
        li.append(i)
print(len(li))
for i in li:
    print(i,end = " ")