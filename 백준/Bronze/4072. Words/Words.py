while True:
    li = input().split()
    if len(li) == 1 and li[0] == "#":
        break
    else:
        for i in li:
            re =reversed(i)
            for j in re:
                print(j,end="")
            print(" ",end="")
        print()
