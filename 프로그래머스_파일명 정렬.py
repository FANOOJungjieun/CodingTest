import re

def solution(files):
    answer = []
    tmp = [] # [real name, head, number]2차원 배열
    
    for f in files:
        t = [f] #원본 저장
        
        for idx in range(len(f)):
            if f[idx].isdigit(): #head 저장
                t.append(f[0:idx].lower())
                break
        
        t.append(int(re.findall(r'\d+', f)[0])) #number저장
        
        tmp.append(t)

    tmp.sort(key=lambda x:x[2]) #number로 먼저 정렬
    tmp.sort(key=lambda x:x[1]) #head로 추가 정렬
    
    for t in tmp:
        answer.append(t[0])
    return answer
