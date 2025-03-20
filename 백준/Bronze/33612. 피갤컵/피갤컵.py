n = int(input())
month = 8 +7*(n-1)
if month % 12 == 0:
    year = 2024 + (month//12) -1    
    month = 12
else:
    year = 2024 + (month//12)
    month = month % 12
print(year,month)