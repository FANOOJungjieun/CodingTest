def solution(arr1, arr2):
    answer = []
    
    for a in range(len(arr1)):
        tmp = []
        for b in range(len(arr1[0])):
            tmp.append(arr1[a][b]+arr2[a][b])
        answer.append(tmp)
    return answer
