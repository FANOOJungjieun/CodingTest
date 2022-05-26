def solution(s):
    answer = []
    s1 = sorted([s.split(',') for s in s[2:-2].split('},{')], key=len)
    
    while len(s1) != 0:
        tmp = s1[0][0]
        answer.append(int(tmp))
        for i in s1:
            i.remove(tmp)
        del s1[0]
        
    return answer
