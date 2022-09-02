# Runtime: 69 ms, faster than 13.38% of Python3 online submissions for Sort Colors.
# Memory Usage: 14 MB, less than 15.92% of Python3 online submissions for Sort Colors.

class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        for i in range(0,len(nums)):
            for j in range(1,len(nums)-i):
                if nums[j-1] >= nums[j]:
                    tmp = nums[j]
                    nums[j] = nums[j-1]
                    nums[j-1] = tmp
        
