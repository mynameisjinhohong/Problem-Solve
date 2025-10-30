a,b,c = map(int,input().split())
one = 1
two = 1
for i in range(a):
    one += b
    two += c
    if two > one:
        temp = one
        one = two
        two = temp
    if one == two:
        two -= 1
print(one,two)