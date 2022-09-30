class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        dp = [0] * (len(nums)+1)
        dp[0] = nums[0]
        answer = dp[0]
        
        for i in range(1,len(nums)):
            dp[i] = max(dp[i-1]+nums[i], nums[i])
            answer = max(answer, dp[i])
        
        return answer
