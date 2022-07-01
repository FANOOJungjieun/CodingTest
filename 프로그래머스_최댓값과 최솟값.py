def solution(s):
    answer = ''
    t = s.split()
    mn = 9999999
    mx = -9999999
    
    for m in t:
        if int(m) > mx:
            mx = int(m)
        if int(m) < mn:
            mn = int(m)
            
    answer = str(mn) + ' ' + str(mx)
    return answer
