def solution(s):
    answer = ''
    blank = 0
    
    for n in s:
        if n == ' ':
            answer += n
            blank = 0
        elif n.isalpha():
            if blank == 0:
                answer += n.upper()
            else:
                answer += n.lower()
            blank += 1
        else:
            answer += n
            blank += 1
    return answer
