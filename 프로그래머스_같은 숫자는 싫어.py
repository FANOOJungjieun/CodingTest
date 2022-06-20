def solution(arr):
    answer = []
    idx = 0
    
    for i in arr:
        if answer == [] :
            answer.append(i)
        elif i != answer[idx]:
            answer.append(i)
            idx += 1
            
    return answer
