def solution(record):
    answer = []
    now = {}
    
    for s in record : // change 처리
        tmp = s.split()
        if tmp[0] == 'Enter' or tmp[0] == 'Change':
            now[tmp[1]] = tmp[2]
            
    for s in record :
        tmp = s.split()
        if tmp[0] == 'Enter' :
            answer.append(now[tmp[1]]+'님이 들어왔습니다.')
        if tmp[0] == 'Leave' :
            answer.append(now[tmp[1]]+'님이 나갔습니다.')
        
    return answer
