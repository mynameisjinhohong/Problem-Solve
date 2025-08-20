a = int(input())
for i in range(a):
    print(" " * (a-i-1),end = "")
    for j in range((i*2)+1):
        if j % 2 == 0:
            print("*",end =" ")
    print()