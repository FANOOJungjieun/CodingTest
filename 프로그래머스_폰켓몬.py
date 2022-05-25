def solution(nums):
    answer = 0
    mx = len(nums)/2
    s1 = len(set(nums))
    
    if s1 > mx:
        answer = mx
    else:
        answer = s1
    return answer
