# Runtime: 108 ms, faster than 86.74% of Python3 online submissions for First Unique Character in a String.
# Memory Usage: 14.2 MB, less than 18.33% of Python3 online submissions for First Unique Character in a String.

class Solution:
    def firstUniqChar(self, s: str) -> int:
        c = Counter(s)
        for i in c:
            if s.count(i) == 1:
                return s.find(i)
        return -1
