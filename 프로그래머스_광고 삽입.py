def solution(play_time, adv_time, logs):
    # 누적 합
    play_time = str_to_int(play_time) #초 단위로 바꿈
    adv_time = str_to_int(adv_time)   
    all_time = [0 for i in range(play_time + 1)] # 누적합 배열 생성
    
    for l in logs: #누적합 기준 저장
        s, e = l.split('-')
        s = str_to_int(s)
        e = str_to_int(e)
        
        all_time[s] += 1
        all_time[e] -= 1
        
    for i in range(1, len(all_time)):
        all_time[i] += all_time[i-1]
    
    for i in range(1, len(all_time)): #누적 시청자 수
        all_time[i] += all_time[i-1]
        
    most_view = 0                           # 5
    max_time = 0                          
    for i in range(adv_time - 1, play_time):
        if i >= adv_time:
            if most_view < all_time[i] - all_time[i - adv_time]:
                most_view = all_time[i] - all_time[i - adv_time]
                max_time = i - adv_time + 1
        else:
            if most_view < all_time[i]:
                most_view = all_time[i]
                max_time = i - adv_time + 1
    return int_to_str(max_time)

def str_to_int(time):
    h, m, s = time.split(':')
    return int(h) * 3600 + int(m) * 60 + int(s)

def int_to_str(time):
    h = time // 3600
    h = '0' + str(h) if h < 10 else str(h)
    time = time % 3600
    m = time // 60
    m = '0' + str(m) if m < 10 else str(m)
    time = time % 60
    s = '0' + str(time) if time < 10 else str(time)
    return h + ':' + m + ':' + s
