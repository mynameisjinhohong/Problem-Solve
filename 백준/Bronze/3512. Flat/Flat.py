a,b = map(int,input().split())
ans1 = 0
ans2 = 0
ans3 = 0
for i in range(a):
    c,d = input().split()
    c = int(c)
    if d == "bedroom":
        ans2 += c
    ans1 += c
    if d == "balcony":
        ans3 += b * c / 2
    else:
        ans3 += b * c
print(ans1)
print(ans2)
if ans3 == int(ans3):
    print(int(ans3))
else:
    print(ans3)
    