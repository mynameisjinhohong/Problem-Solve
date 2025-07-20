a = input()
free = 0
left = 0
right = 0
for i in a:
    if 65 <= ord(i) <= 90 or ord(i) == 32:
        free += 1
    b = i.lower()
    if b == ' ':
        continue
    if b == 'q' or b == 'w' or b == 'e' or b == 'r' or b == 't' or b == 'y' or b == 'a' or b == 's' or b == 'd' or b == 'f' or b == 'g' or b == 'z' or b == 'x' or b == 'c' or b == 'v' or b == 'b':
        left += 1
    else:
        right += 1
for i in range(free):
    if left <= right:
        left += 1
    else:
        right += 1
print(left,right)
