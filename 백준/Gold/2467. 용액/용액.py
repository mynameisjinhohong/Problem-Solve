import sys
N = int(input())
liquids = list(map(int,input().split()))
best = sys. maxsize
left = 0
bestLeft = liquids[left]
right = len(liquids)-1
bestRight = liquids[right]
while right > left:
    if abs(liquids[right] + liquids[left]) < best:
        best = abs(liquids[right] + liquids[left])
        bestRight = right
        bestLeft = left
    if abs(liquids[right-1] + liquids[left]) > abs(liquids[right] + liquids[left +1]):
        left += 1
    else:
        right -= 1
print(liquids[bestLeft],liquids[bestRight])