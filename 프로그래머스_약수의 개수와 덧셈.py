def solution(left, right):
    answer = 0
    anslist = []
    
    for a in range(left,right+1):
        cnt = 0
        for b in range(a):
            if a % (b+1) ==0:
                cnt += 1
        anslist.append(cnt)
    
    tmp = left
    for i in anslist:
        if i%2 == 0 :
            answer += tmp
        else:
            answer -= tmp
        tmp += 1
            
    return answer
