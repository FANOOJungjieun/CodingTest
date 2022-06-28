def solution(n):
    answer = 0
    num = n+1
    
    while True:
        bi = str(format(num,'b'))
        if str(format(n,'b')).count('1') == bi.count('1'):
            answer = num
            break
        num += 1
    return answer
