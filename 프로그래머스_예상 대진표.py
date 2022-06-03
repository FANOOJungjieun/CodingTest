def solution(n,a,b):
    answer = 1
    now_a = a
    now_b = b
    
    while True:
        tmp = int((now_a+1)/2)
        if abs(now_a-now_b) == 1 and now_a+now_b == (4*tmp)-1:
            break
        
        now_a = int((now_a+1)/2)
        now_b = int((now_b+1)/2)
        answer += 1
    return answer
