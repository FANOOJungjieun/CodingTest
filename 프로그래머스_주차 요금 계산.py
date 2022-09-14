from datetime import datetime
import math

def solution(fees, records):
    answer = []
    d = {}
    history = {}
    
    def parking_value(m):
        if m <= fees[0]:
            return fees[1]
        
        return fees[1] + (math.ceil((m-fees[0])/fees[2]) * fees[3])
        
    
    for r in records:
        tmp = r.split()
        if tmp[2] == 'IN': #입차 시 딕셔너리에 저장
            d[tmp[1]] = tmp[0]
        if tmp[2] == 'OUT': #시차 계산(분 단위)
            time_1 = datetime.strptime(d[tmp[1]],"%H:%M")
            time_2 = datetime.strptime(tmp[0],"%H:%M")
            interval = int(((time_2-time_1).seconds)/60)
            # 총 시간 계산. 같은 번호가 이미 입-출차한 기록이 있다면 그 값을 더함.

            if tmp[1] in history: #기존 값이 있다면
                tmp_interval = history[tmp[1]]
                history[tmp[1]] = interval + tmp_interval
            else:
                history[tmp[1]] = interval
                
            del d[tmp[1]] # 출차했으므로 삭제
        
    # 여전히 d에 값이 남아 있을 시, 출차되지 않은 것이므로 23:59로 출차 계산
    if d != {}:
        for k, v in d.items():
            time_1 = datetime.strptime(v,"%H:%M")
            time_2 = datetime.strptime("23:59","%H:%M")
            interval = int(((time_2-time_1).seconds)/60)

            if k in history: #기존 값이 있다면
                tmp_interval = history[k]
                history[k] = interval + tmp_interval
            else:
                history[k] = interval
    
    pre_sorted = {}
    
    for k, v in history.items():
        pre_sorted[k] = parking_value(v)
        
    pre_sorted = dict(sorted(pre_sorted.items()))
    
    for k, v in pre_sorted.items():
        answer.append(v)
        
    return answer
