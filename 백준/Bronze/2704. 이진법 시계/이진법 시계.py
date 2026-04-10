a = int(input())
for i in range(a):
    b = list(map(int,input().split(":")))
    h = list(bin(b[0])[2:])
    m = list(bin(b[1])[2:])
    s = list(bin(b[2])[2:])
    if len(h) < 6:
        for i in range(6- len(h)):
            h.insert(0,0)
    if len(m) < 6:
        for i in range(6- len(m)):
            m.insert(0,0)
    if len(s) < 6:
        for i in range(6- len(s)):
            s.insert(0,0)
    ans1 = ""
    ans2 = ""
    for i in range(6):
        ans1 += str(h[i])
        ans1 += str(m[i])
        ans1 += str(s[i])
    ans2 = ''.join(str(a) for a in h) + ''.join(str(a) for a in m) + ''.join(str(a) for a in s)
    print(ans1,ans2)