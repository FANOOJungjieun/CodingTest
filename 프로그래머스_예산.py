def solution(d, budget):
    answer = 0
    
    tmp = budget
    d.sort()
    
    for i in d:
        if tmp<i:
            break
        answer = answer+1
        tmp = tmp-i
    
    return answer
