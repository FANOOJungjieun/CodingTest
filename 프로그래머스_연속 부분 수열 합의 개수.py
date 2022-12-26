def solution(elements):
    arr = set()
    
    el = len(elements)
    elements = elements*2
    
    for i in range(el):
        for j in range(el):
            arr.add(sum(elements[i:i+j+1]))
    

    return len(arr)
