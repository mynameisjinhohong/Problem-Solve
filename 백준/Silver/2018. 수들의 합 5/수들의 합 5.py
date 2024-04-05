a = int(input())
answer = 0
start = int(a/2) + 1
b = list()
hap = 0
for i in range(start):
    if a == i+1:
        break
    hap += i +1
    b.append(i + 1)
    while hap > a:
        po = b.pop(0)
        hap -= po
    if hap == a:
        answer += 1
print(answer + 1)