a,b = map(int,input().split())
idx = 1
while a > 0:
    if str(b) not in str(idx):
        a -= 1
    idx += 1
print(idx-1)
