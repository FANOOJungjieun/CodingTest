def solution(s):
    answer = ''
    l = len(s)
    mid = int(l/2)
    
    if l%2 == 0 :
        return s[mid-1]+s[mid]
    else :
        return s[mid]
    
    return answer
