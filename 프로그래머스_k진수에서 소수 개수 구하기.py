def solution(n, k):
    answer = 0
    def convert_notation(n, base):
        T = "0123456789ABCDEF"
        q, r = divmod(n, base)

        return convert_notation(q, base) + T[r] if q else T[r]
    def is_prime_number(x):
        if x == 1:
            return False
        
        for i in range(2, int(x**0.5)+1):
            if x % i == 0:
                return False
        return True
    
    tmp = convert_notation(n,k).split('0')
    
    for t in tmp:
        if t and is_prime_number(int(t)):
            answer += 1

    return answer
