def solution(gems):
    answer = [0,0]
    n_gems = len(set(gems))
    minlen = 99999
    d = dict();
    
    start=0
    end=0
    d[gems[0]] = 1;

    while end < len(gems) :
        #t = len(set(gems[start:end+1])) // O((end-start)^2)
        
        while d[gems[start]] > 1:
            d[gems[start]] -= 1
            start += 1

        if len(d) == n_gems:
            if end-start < minlen:
                minlen = end-start
                answer = [start+1, end+1]
                #print('{},{}'.format(start,end))
        end += 1
        if end == len(gems) :
            break
            
        if gems[end] not in d :
            d[gems[end]] = 1
        else:
            d[gems[end]] += 1
        
    
    return answer
