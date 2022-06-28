def solution(arr):
    answer = arr.copy()
    
    if len(arr) == 1:
        return [-1]
    
    mn = min(arr)
    rm = answer.index(mn)
    del answer[rm]
    
    return answer
