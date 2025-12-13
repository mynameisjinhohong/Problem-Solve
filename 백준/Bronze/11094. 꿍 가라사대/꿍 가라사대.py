a = int(input())
for i in range(a):
    b = input()
    c = list(b.split())
    if c[0] == "Simon" and c[1] == "says":
        print(b[10:])