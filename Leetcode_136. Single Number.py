# Runtime: 258 ms, faster than 30.17% of Python3 online submissions for Single Number.
# Memory Usage: 16.8 MB, less than 50.00% of Python3 online submissions for Single Number.

class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        d = Counter(nums).most_common()
        return d[len(d)-1][0]
