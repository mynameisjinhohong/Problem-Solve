a = int(input())
for i in range(a):
    b = int(input())
    if (b+1) % (b%100) == 0:
        print("Good")
    else:
        print("Bye")