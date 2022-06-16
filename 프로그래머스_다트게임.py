def solution(dartResult):
    answer = 0
    
    dart = list(dartResult)
    num = []
    SDT = []
    bonus = [""]*3
    cal = [0,0,0]
    cnt = -1
    
    for a in range(len(dart)):
        if dart[a].isdigit() :
            if dart[a-1].isdigit() :
                continue
            if a+1 < len(dart) and dart[a+1] == '0':
                num.append(int(dart[a]+'0'))
            else :
                num.append(int(dart[a]))
            cnt += 1
        elif dart[a] == '*' or dart[a] == '#':
            bonus[cnt] += dart[a]
        else :
            SDT.append(dart[a])
            
    for a in range(3):
        if SDT[a] == 'S':
            cal[a] += num[a]
        elif SDT[a] == 'D':
            cal[a] += num[a]**2
        elif SDT[a] == 'T':
            cal[a] += num[a]**3
            
        
        if '*' in bonus[a] :
            cal[a] *= 2
            if a != 0:
                cal[a-1] *= 2
        if '#' in bonus[a] :
            cal[a] *= -1
            
    for a in range(3):
        print(cal[a])
        answer += cal[a]
            
    return answer
