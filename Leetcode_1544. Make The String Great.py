class Solution:
    def makeGood(self, s: str) -> str:
        for i in range(len(s)-1):
            if abs(ord(s[i]) - ord(s[i+1])) == 32: # 대문자&소문자 관계면
                return self.makeGood(s[:i] + s[i+2:]) # 이 두 문자를 삭제한 뒤 재귀.
        
        return s # 해당되는 것이 없으면 그대로 리턴.
