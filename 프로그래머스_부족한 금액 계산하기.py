def solution(price, money, count):
    answer = 0
    now_money = money
    
    for c in range(count):
        now_money -= price * (c+1)
    
    if now_money < 0:
        answer = -now_money

    return answer
