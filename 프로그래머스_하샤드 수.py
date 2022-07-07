def solution(x):
    x1 = str(x)
    s = 0
    
    for n in x1:
        s += int(n)
        
    if x % s == 0:
        return True
    else:
        return False
