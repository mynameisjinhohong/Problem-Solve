input()
a = input()
ans = [0,0,0,0,0]
for i in a:
    if i == 'H':
        ans[0] += 1
    elif i == 'I':
        ans[1] += 1
    elif i == 'A':
        ans[2] += 1
    elif i == 'R':
        ans[3] += 1
    elif i == 'C':
        ans[4] += 1
print(min(ans))