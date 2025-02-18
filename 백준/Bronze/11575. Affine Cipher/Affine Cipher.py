n = int(input())
for _ in range(n):
    a,b = map(int,input().split())
    s = input()
    for i in s:
        su = ord(i)
        su -= 65
        print(chr((su*a + b)%26 + 65),end="")
    print()