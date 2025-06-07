a = int(input())
b = int(input())
ans = 2
while(True):
    if b > a:
        break
    c = a -b
    a = b
    b = c
    ans += 1
print(ans)