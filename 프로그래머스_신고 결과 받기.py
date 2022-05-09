def solution(id_list, report, k):
    answer = [0] * len(id_list)
    di = {id: [] for id in id_list}
    
    for i in set(report) :
        t = i.split()
        di[t[1]].append(t[0]) //신고 당한 계정을 key로 지정

    for i in di.values() :
        if len(i) >= k :
            for j in i :
                a = id_list.index(j)
                answer[a] += 1
    return answer
