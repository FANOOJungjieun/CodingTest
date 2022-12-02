class Solution:
    def closeStrings(self, w1: str, w2: str) -> bool:
        # 1. 서로 다른 알파벳의 개수와 그 수가 일치하는지 확인
        # 2. 알파벳 종류가 일치하는지 확인
        return sorted(Counter(w1).values()) == sorted(Counter(w2).values()) and set(w1) == set(w2)
