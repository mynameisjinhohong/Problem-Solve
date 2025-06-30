while(True):
    try:
        a = input()
        b = []
        for i in range(0,len(a),2):
            c = int(a[i:i+2],16)
            b.append(chr(c))
        print(''.join(b))
    except:
        break