from itertools import combinations
from collections import defaultdict
from bisect import bisect_left

def solution(info, query):
    answer = []
    dic = defaultdict(list)
    
    for i in info:
        i = i.split()
        condition = i[:-1]
        score = int(i[-1])
        
        for a in range(5):
            case = list(combinations([0,1,2,3], a)) #딕셔너리로 시간줄이기
            for c in case:
                tmp = condition.copy()
                for idx in c:
                    tmp[idx] = '-'
                key = ''.join(tmp)
                dic[key].append(score)
                
    for v in dic.values():
        v.sort()
    
    for q in query:
        q = q.replace('and', '')
        q = q.split()
        
        target_key = ''.join(q[:-1])
        target_score = int(q[-1])
        
        count = 0
        if target_key in dic:
            target_list = dic[target_key]
            idx = bisect_left(target_list, target_score) #이분탐색으로 시간줄이기
            count = len(target_list) - idx
        answer.append(count)
    
    return answer
