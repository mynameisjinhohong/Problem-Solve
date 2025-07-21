x = 0
y = 0
down = True
dic = dict()
i = 0
while(x <= 5000 and y <= 5000):
    dic[f"{x} {y}"] = i
    if i % 2 == 0:
        x += 1
        y += 1
    else:
        if down:
            x += 1
            y -= 1
            down = False
        else:
            x -= 1
            y += 1
            down = True
    i += 1
a = int(input())
for i in range(a):
    b = input()
    if b in dic:
        print(dic[b])
    else:
        print("No Number")
        
    