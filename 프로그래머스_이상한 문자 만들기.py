def solution(s):
    answer = ''
    cnt = 0
    
    for a in s:
        if a == ' ':
            answer += a
            cnt = 0
            continue
        else:
            if cnt%2 == 0:
                answer += a.upper()
            else:
                answer += a.lower()
            cnt += 1

    return answer
