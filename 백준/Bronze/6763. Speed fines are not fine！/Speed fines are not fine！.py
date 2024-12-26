a = int(input())
b = int(input())
ans = b - a
if ans <= 0:
    print("Congratulations, you are within the speed limit!")
elif ans <= 20:
    print("You are speeding and your fine is $100.")
elif ans <= 30:
    print("You are speeding and your fine is $270.")
else:
    print("You are speeding and your fine is $500.")