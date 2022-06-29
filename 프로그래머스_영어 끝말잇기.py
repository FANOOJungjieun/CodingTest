def solution(n, words):
    answer = [0,0]
    arr = []

    for i, w in enumerate(words):
        if arr != []:
            if arr[-1].strip()[-1] != w[0] or w in arr:
                answer[0] = (i%n)+1
                answer[1] = int((i/n))+1
                break
            else:
                arr.append(w)
        else:
              arr.append(w)  

    return answer
