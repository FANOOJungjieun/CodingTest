def solution(age):
    answer = ''
    alpha = ['a','b','c','d','e','f','g','h','i','j']
    age = str(age)
    
    for idx in range(len(age)):
        tmp = int(age[idx])
        answer += alpha[tmp]
    
    return answer
