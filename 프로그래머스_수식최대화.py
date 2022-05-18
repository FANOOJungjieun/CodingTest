from itertools import permutations

def solution(expression):
    answer = 0
    ops = ["*", "+", "-"]
    
    arr = []
    s = 0
    for i, j in enumerate(expression) : #index, value return
        if j in ops :
            arr.append(expression[s:i])
            arr.append(j)
            s = i+1
    else : #for가  끝까지 실행되었을 때
            arr.append(expression[s:])
            
    for i in ops :
        if i not in expression :
            ops.remove(i)
            
    pri = permutations(ops)
    
    for tc in pri :
        tarr = arr.copy()
        for c in tc :
            while c in tarr :
                point = tarr.index(c)
                tmp = str(eval("("+tarr[point-1]+")"+tarr[point]+"("+tarr[point+1]+")"))
                del tarr[point+1]
                del tarr[point]
                del tarr[point-1]
                tarr.insert(point-1,tmp)
        result = abs(int(tarr[0]))
        answer = max(answer,result)
            
    return answer
