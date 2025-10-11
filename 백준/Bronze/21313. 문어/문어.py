a = int(input())
if a%2 == 0:
    for i in range(a):
        print((i%2) + 1,end=" ")
else:
    for i in range(a-1):
        print((i%2) + 1,end=" ")
    print(3)