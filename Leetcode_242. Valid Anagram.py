# Runtime: 49 ms, faster than 92.61% of Python3 online submissions for Valid Anagram.
# Memory Usage: 15 MB, less than 21.28% of Python3 online submissions for Valid Anagram.

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        sarr = list(s)
        tarr = list(t)
        
        sarr.sort()
        tarr.sort()
        
        if sarr == tarr:
            return True
        else:
            return False
