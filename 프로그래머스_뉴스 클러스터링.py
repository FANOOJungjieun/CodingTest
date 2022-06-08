
def solution(str1, str2):
    s1 = make_num(str1)
    s2 = make_num(str2)
    if s1 == [] and s2 == []:
        return 65536
    
    s1_copy = s1.copy()
    s2_copy = s2.copy()
    inter = [] 
    
    for i in s1:
        if i in s2_copy:
            inter.append(i)
            s1_copy.remove(i)
            s2_copy.remove(i)
    union = inter + s1_copy + s2_copy

    answer = int((len(inter) / len(union)) * 65536)
    
    return answer

def make_num(s):
    s = s.upper()
    ans = []
    for n in range(len(s)-1):
        tmp = s[n:n+2]
        if tmp.isalpha():
            ans.append(tmp)
    return ans
