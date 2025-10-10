idx = 1
while True:
    a = input()
    if a == "0":
        break
    b = list(map(int,a.split()))
    if b[0]*b[0]*4 >= (b[1] * b[1]) + (b[2] * b[2]):
        print("Pizza " + str(idx) + " fits on the table.")
    else:
        print("Pizza " + str(idx) + " does not fit on the table.")
    idx += 1