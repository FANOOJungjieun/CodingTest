from itertools import combinations, permutations

def is_bad(uid, ban): #아이디가 ban되었는지 체크하는 함수
    if len(uid) != len(ban):
        return False
    else:
        for i,j in zip(uid,ban): #주어진 아이디를 한 글자씩 비교한다.
            if j == '*':
                continue
            if i != j:
                return False
        return True
        
def solution(user_id, banned_id):
    answer = []
    for i in permutations(user_id, len(banned_id)): #ban아이디의 개수만큼 아이디에서 랜덤으로 고름(순열) - 완전탐색
        count = 0
        for a, b in zip(i, banned_id): #주어진 ban아이디 배열과 고른 i순열을 전부 비교함
            if is_bad(a,b): #주어진 아이디가 ban아이디에 부합하면
                count += 1 
        
        if count == len(banned_id) : #부합하는 아이디의 수가 ban아이디의 수와 같고 (= 전부 해당함)
            if set(i) not in answer: #그 아이디 순열이 answer에 포함되지 않은 상태라면
                answer.append(set(i))
                
    return len(answer)
