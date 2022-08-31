class Solution:
    def canJump(self, nums: List[int]) -> bool:
        n = len(nums)                   # number of elements
        goal = n-1                      # goal index
        for i in range(n-1, -1, -1):
            if i + nums[i] >= goal:     # if goal is reachable from i with given max jumps
                goal = i                # - update the new goal index
        return goal == 0
