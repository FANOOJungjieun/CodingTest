# any : 하나만 True여도 True 반환

class Solution:
    def reorderedPowerOf2(self, n: int) -> bool:
        return any(cand[0] != '0' and bin(int("".join(cand))).count('1') == 1
                   for cand in permutations(str(n)))
