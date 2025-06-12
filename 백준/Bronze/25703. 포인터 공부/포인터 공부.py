a = int(input())
print("int a;")
va = "a"
for i in range(1,a+1):
    test = "*"*i
    before = va
    if i == 1:
        va = "ptr"
    else:
        va = "ptr" + str(i)
    print(f"int {test}{va} = &{before};")