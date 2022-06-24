import string

tmp = "0123456789ABCDEF"
def convert(num, base) :
    q, r = divmod(num, base)
    if q == 0 :
        return tmp[r] 
    else :
        return convert(q, base) + tmp[r]

def solution(n, t, m, p):
    answer = ''
    arr = ""
    
    for i in range(m*t):
        arr += str(convert(i,n))
    
    pt = p-1
    for c in range(t) :
        answer += arr[pt]
        pt += m
        
    return answer
