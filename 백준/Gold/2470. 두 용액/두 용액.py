N = int(input())
liquors = list(map(int, input().split()))
liquors.sort()
hap = 2000000001
small = 0
big = 0
start = 0
end = N-1
while start != end:
    su = abs(liquors[start] + liquors[end])
    if hap > su:
        hap = su
        small = start
        big = end
    if abs(liquors[start+1]+liquors[end]) > abs(liquors[start] +liquors[end -1]):
        end -= 1
    else:
        start += 1
print(liquors[small],liquors[big])