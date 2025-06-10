a,b,c = map(int,input().split())
d = min(a,b,c)
buger = list(map(int,input().split()))
side = list(map(int,input().split()))
drink = list(map(int,input().split()))
print(sum(buger) + sum(side) + sum(drink))
buger.sort()
side.sort()
drink.sort()
for i in range(d):
    buger[len(buger)-1-i] = buger[len(buger)-1-i] // 10 * 9
    side[len(side)-1-i] = side[len(side)-1-i] // 10 * 9
    drink[len(drink)-1-i] = drink[len(drink)-1-i] // 10 * 9
print(sum(buger)+sum(side)+sum(drink))