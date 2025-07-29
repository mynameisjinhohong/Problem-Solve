li = list(map(int,input().split()))
li.sort()
print(li[0],li[1], li[3] if li[0] + li[1] == li[2] else li[2] )