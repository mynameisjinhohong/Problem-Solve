def div_conquer(su):
    global arr
    if su == 1:
        return [[1,1],[1,0]]
    else:
        hap = div_conquer(su//2)
        if su%2 == 1:
            dap = arr_mult(hap,hap)
            return arr_mult(dap,arr)
        else:
            dap = arr_mult(hap,hap)
            return dap
def div_conquer2(su):
    global arr
    if su == 1:
        return [[1, 1], [1, 0]]
    
    half = div_conquer(su // 2)  # 재귀적으로 작은 문제 해결
    
    result = arr_mult(half, half)  # 두 번 호출되지 않음. 한 번만 호출
    
    if su % 2 == 1:
        # 홀수일 경우 추가적으로 한 번 더 곱함
        result = arr_mult(result, arr)
    
    return result

def arr_mult(x,arr2):
    mult = [[0,0],[0,0]]
    mult[0][0] = (x[0][0] * arr2[0][0] + x[0][1] * arr2[1][0])%1000000007
    mult[0][1] = (x[0][0] * arr2[0][1] + x[0][1] * arr2[1][1])%1000000007
    mult[1][0] = (x[1][0] * arr2[0][0] + x[1][1] * arr2[1][0])%1000000007
    mult[1][1] = (x[1][0] * arr2[0][1] + x[1][1] * arr2[1][1])%1000000007
    return mult


n = int(input())
arr = [[1,1],[1,0]]
result = [[1,1],[1,0]]
if n <= 2:
    print(1)
elif n == 3:
    print(2)
else:
    result = div_conquer2(n-1)
    print(result[0][0])