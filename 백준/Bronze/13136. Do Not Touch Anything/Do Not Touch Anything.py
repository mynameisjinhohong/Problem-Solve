r,c,n = map(int,input().split())
print((r//n+1 if r%n > 0 else r//n) * (c//n+1 if c%n > 0 else c//n))