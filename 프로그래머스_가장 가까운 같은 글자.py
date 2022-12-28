from collections import defaultdict

def solution(s):
    answer = []
    dt = defaultdict()
    
    for idx in range(len(s)):
        if s[idx] not in dt:
            dt[s[idx]] = idx
            answer.append(-1)
        else:
            answer.append(idx-dt[s[idx]])
            dt[s[idx]] = idx
    return answer
