class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        m = {}
        
        for i in nums:
            if i in m:
                return True
            else:
                m[i] = 1
        return False
