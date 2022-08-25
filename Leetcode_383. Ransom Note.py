# Runtime: 78 ms, faster than 67.01% of Python3 online submissions for Ransom Note.
# Memory Usage: 14.1 MB, less than 53.79% of Python3 online submissions for Ransom Note.

class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        answer = 0
        
        for n in ransomNote:
            if n in magazine:
                magazine = magazine.replace(n, "", 1)
                answer += 1
        
        if answer != len(ransomNote):
            return False
        else:
            return True
        
