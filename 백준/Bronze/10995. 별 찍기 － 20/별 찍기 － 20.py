a = int(input())
for i in range(a):
    for j in range(a):
        if i%2 == 0:
            print("* ",end="")
        else:
            print(" *",end="")
    print()