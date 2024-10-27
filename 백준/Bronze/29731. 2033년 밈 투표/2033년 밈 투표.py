a = int(input())
test = ["Never gonna give you up","Never gonna let you down","Never gonna run around and desert you","Never gonna make you cry","Never gonna say goodbye","Never gonna tell a lie and hurt you","Never gonna stop"]
for i in range(a):
    sen = input()
    if not sen in test:
        print("Yes")
        break
    if i == a-1:
        print("No")