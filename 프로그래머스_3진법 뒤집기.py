def three(n, q):
    rev_base = ''

    while n > 0:
        n, mod = divmod(n, q)
        rev_base += str(mod)

    return rev_base[::-1] 

def solution(n):
    answer = 0
    reverse = ''
    thr = three(n, 3);
    
    for n in thr:
        reverse = n + reverse
    
    answer = int(reverse,3)
    
    return answer
