from itertools import combinations

def prime_num(num):
    for i in range(2, num):
        if num%i == 0:
            return False
    return True

def solution(nums):
    answer = 0
    com = []
    
    com = list(combinations(nums,3))
    
    for i in com:
        tmp = 0
        for a in i:
            tmp += a
        if prime_num(tmp) == True:
            answer += 1

    return answer
