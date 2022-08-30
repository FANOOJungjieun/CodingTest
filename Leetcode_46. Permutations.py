# Runtime: 45 ms, faster than 87.74% of Python3 online submissions for Permutations.
# Memory Usage: 14 MB, less than 84.41% of Python3 online submissions for Permutations.

class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        return list(permutations(nums,len(nums)))
        
