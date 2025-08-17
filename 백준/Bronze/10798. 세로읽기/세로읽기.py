def Put(a,idx):
    if len(a) > idx:
        return a[idx]
    else:
        return ""

a = input()
b = input()
c = input()
d = input()
e = input()
for i in range(15):
    print(Put(a,i),end ="")
    print(Put(b,i),end ="")
    print(Put(c,i),end ="")
    print(Put(d,i),end ="")
    print(Put(e,i),end ="")