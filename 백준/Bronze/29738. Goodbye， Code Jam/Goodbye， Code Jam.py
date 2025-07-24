a = int(input())
for i in range(a):
    b = int(input())
    if b <= 25:
        print(f"Case #{i+1}: World Finals")
    elif b <= 1000:
        print(f"Case #{i+1}: Round 3")
    elif b <= 4500:
        print(f"Case #{i+1}: Round 2")
    else:
        print(f"Case #{i+1}: Round 1")