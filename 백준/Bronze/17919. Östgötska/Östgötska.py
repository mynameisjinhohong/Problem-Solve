a = list(input().split())
b = 0
c = 0
for i in a:
    if "ae" in i:
        b += 1
        c += 1
    else:
        c += 1
if b*10 >= c*4:
    print("dae ae ju traeligt va")
else:
    print("haer talar vi rikssvenska")