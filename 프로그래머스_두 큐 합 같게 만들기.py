def solution(queue1, queue2):
    answer = 0
    if (sum(queue1) +sum(queue2))%2 == 1:
        return -1

    arr = queue1+queue2
    target = int((sum(queue1) +sum(queue2))/2)
    pt1 = 0
    pt2 = len(queue1)
    
    s = sum(queue1)
    
    while s != target:
        if pt1 >= len(arr) or pt2 >= len(arr):
            answer = -1
            break;
        
        if s < target:
            s += arr[pt2]
            pt2 += 1
            answer += 1
        elif s > target:
            s -= arr[pt1]
            pt1 += 1
            answer += 1
    
    return answer


"""    시간초과
    target = int((sum(queue1) +sum(queue2))/2)
    s = sum(queue1)
    
    check = False
    t_queue1 = queue1.copy() # 얕은 복사
    t_queue2 = queue2.copy()
    
    while s != target:
        if t_queue1 == queue1 and t_queue2 == queue2:
            if check == False:
                check = True
            else:
                answer = -1
                break
        
        if s < target:
            s += t_queue2[0]
            t_queue1.append(t_queue2[0])
            del t_queue2[0]
            answer += 1
        elif s > target:
            s -= t_queue1[0]
            t_queue2.append(t_queue1[0])
            del t_queue1[0]
            answer += 1
"""
