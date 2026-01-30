a,b = map(int,input().split())
li = list()
ans = list()
for i in range(a):
    c = input()
    li.append(c)
if(b == 1):
    for i in range(a):
        line = ""
        for j in li[i]:
            if j == 'd':
                line += 'q'
            elif j == 'b':
                line += 'p'
            elif j == 'q':
                line += 'd'
            elif j == 'p':
                line += 'b'
        ans.append(line)
else:
    for i in range(a):
        line = ""
        for j in li[i]:
            if j == 'd':
                line += 'b'
            elif j == 'b':
                line += 'd'
            elif j == 'q':
                line += 'p'
            elif j == 'p':
                line += 'q'
        ans.append(line)
for i in ans:
    print(i)
    