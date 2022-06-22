def solution(n):
    answer = 0
    l = list(str(n))
    l.sort(reverse = True)
    answer = int("".join(l))
    return answer
