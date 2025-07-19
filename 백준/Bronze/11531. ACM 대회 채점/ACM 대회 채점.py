li = list(0 for i in range(26))
ans1 = 0
ans2 = 0
while(True):
    a = input()
    if a == "-1":
        break
    b,c,d = a.split()
    if d == "right":
        ans1 += 1
        ans2 += int(b) + 20 * int(li[ord(c)-65])
    else:
        li[ord(c) - 65] += 1
print(ans1,ans2)