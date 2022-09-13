def solution(cacheSize, cities):
    answer = 0
    q = []
    
    for v in cities:
        v = v.lower()
        if q == [] and cacheSize != 0 : #setting
            q.append(v)
            answer += 5
            continue
        
        if v in q: #hit
            answer += 1
            q.remove(v)
            q.append(v) #update
        else: #miss
            if len(q) == cacheSize:
                q.append(v)
                del q[0]
            else:
                q.append(v)
            answer += 5
            
    return answer
