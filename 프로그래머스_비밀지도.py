def solution(n, arr1, arr2):
    answer = []
    
    m1 = [0] *n
    m2 = [0] *n
    
    for i in range(n):
        tmp = list(format(arr1[i], 'b').zfill(n))
        tmp2 = list(format(arr2[i], 'b').zfill(n))
        m1[i]=tmp
        m2[i]=tmp2
        
    for a in range(n):
        tmp =""
        for b in range(n):
            if m1[a][b] == '1' or m2[a][b] == '1':
                tmp += '#'
            else :
                tmp += ' '
        answer.append(tmp)
    
    return answer
