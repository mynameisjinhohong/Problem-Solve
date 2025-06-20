a = int(input())
for i in range(a):
    b = input()
    ans1 = 0
    ans2 = 0
    for i in b:
        if i == 'A' or i == 'E' or i == 'I' or i == 'O' or i == 'U' or i == 'a' or i == 'e' or i == 'i' or i == 'o'or i == 'u':
            ans1 += 1
        elif i == ' ':
            continue
        else:
            ans2 += 1
    print(ans2,ans1)