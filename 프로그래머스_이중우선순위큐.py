import heapq

def solution(operations):
    answer = [0,0]
    mn =[]
    mx = []
    
    for op in operations:
        data = int(op[2:])

        if op[0] == 'I':
            heapq.heappush(mn, data)
            heapq.heappush(mx, (-data,data))
        elif op[0] == 'D':
            if len(mn) == 0:
                continue
            
            if data == -1:
                value = heapq.heappop(mn)
                mx.remove((-value,value))
            elif data == 1:
                value = heapq.heappop(mx)[1]
                mn.remove(value)
                
    if len(mx) == 0:
        answer[0] = 0
    else:
        answer[0] = heapq.heappop(mx)[1]
        
    if len(mn) == 0:
        answer[1] = 0
    else:
        answer[1] = heapq.heappop(mn)
            

    return answer
