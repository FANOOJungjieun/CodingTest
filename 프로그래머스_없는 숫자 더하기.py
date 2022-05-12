def solution(numbers):
    answer = 0
    r1 = [0]*10
    
    for i in numbers :
        r1[i] += 1

        
    num = 0
    
    for i in r1 :
        if i == 0 :
            answer += num
        num += 1
    
    
    return answer
