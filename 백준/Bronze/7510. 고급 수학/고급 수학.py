a = int(input())
for i in range(a):
    b,c,d = map(int,input().split())
    print(f"Scenario #{i+1}:")
    if b*b + c*c == d*d or b*b+d*d == c*c or c*c+d*d == b*b:
        print("yes")
    else:
        print("no")
    print()