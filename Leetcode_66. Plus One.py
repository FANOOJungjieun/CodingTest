# Runtime: 44 ms, faster than 69.87% of Python3 online submissions for Plus One.
# Memory Usage: 13.9 MB, less than 58.87% of Python3 online submissions for Plus One.

class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        tmp = int(''.join(str(s) for s in digits))+1
        return list(str(tmp))
