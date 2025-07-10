a = int(input())
ans = a * 5 - 400
print(ans)
if ans < 100:
    print(1)
elif ans == 100:
    print(0)
else:
    print(-1)