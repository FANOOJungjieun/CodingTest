def solution(N, stages):
    answer = []
    length = len(stages)
    
    for i in range(1,N+1):
        count = stages.count(i)
        
        if length == 0:
            fail = 0
        else:
            fail = count/length #초기항은 모든 length를 분모로 가진다는 점에 착안
        length -= count
        answer.append((i,fail))
    answer=sorted(answer, key=lambda x: x[1], reverse=True)
    answer = [i[0] for i in answer]
    
    return answer
