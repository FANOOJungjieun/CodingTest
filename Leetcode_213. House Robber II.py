class Solution:
    def rob(self, nums: List[int]) -> int:
        dp = [0] * (len(nums)+1)
        dp2 = [0] * (len(nums)+1)

        if nums == []:
            return 0

        if len(nums) == 1:
            return nums[0]

        dp[0] = nums[0]
        dp2[0] = 0
        dp[1] = max(nums[0],nums[1])
        dp2[1] = nums[1]

        for i in range(2, len(nums)-1): # dp[0]을 포함함
            dp[i] = max(dp[i-1], dp[i-2]+nums[i])

        for i in range(2, len(nums)): # dp[0]을 포함하지않음
            dp2[i] = max(dp2[i-1], dp2[i-2]+nums[i])
        
        return max(dp[len(nums)-2], dp2[len(nums)-1])        
