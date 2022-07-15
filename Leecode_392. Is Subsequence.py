class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        
        idx = 0
        
        if len(s) == 0:
            return True
        
        for n in t:
            if idx >= len(s):
                break
            if n == s[idx]:
                idx += 1
        
        if idx == len(s):
            return True
        else:
            return False
        
