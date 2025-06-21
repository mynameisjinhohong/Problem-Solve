from decimal import Decimal
A,B,C = map(int,input().split())
ans = Decimal(A) * Decimal(B) / Decimal(C)
print(ans)