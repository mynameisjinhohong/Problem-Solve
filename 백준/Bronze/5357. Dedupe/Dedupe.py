a = int(input())
for i in range(a):
    test = input()
    dap = list()
    for j in range(len(test)):
        if j == 0:
            dap.append(test[j])
        else:
            if not test[j-1] == test[j]:
                dap.append(test[j])
    print(''.join(dap))