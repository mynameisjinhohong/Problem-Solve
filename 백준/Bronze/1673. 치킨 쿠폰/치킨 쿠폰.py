while True:
    try:
        a,b = map(int,input().split())
        eat = a
        ticket = a
        while ticket >= b:
            su = ticket // b
            eat += su
            ticket = su + ticket % b
        print(eat)
    except:
        break