def solution(numbers):
    answer = []
    
    for ia, a in enumerate(numbers):
        for ib, b in enumerate(numbers):
            if ia == ib:
                continue
            answer.append(a+b)
    
    answer = list(set(answer))
    answer.sort()
    return answer
