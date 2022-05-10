def solution(lottos, win_nums):
    answer = [0]*2
    tmp = [x for x in win_nums if x not in lottos]
    zero = lottos.count(0)
    count = 0
    
    if len(tmp) < zero :
        count = len(tmp)
    else :
        count = zero
    
    if len(tmp)<=4 :
        answer[1] = len(tmp)+1
        answer[0] = answer[1] - count
    else :
        answer[1] = 6
        if len(tmp) == 6:
            if count <2 :
                answer[0] = 6
            else :
                answer[0] = 7 - count
        else :
            answer[0] = answer[1] - count
    
    return answer
