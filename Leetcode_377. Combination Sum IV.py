#Runtime: 81 ms, faster than 20.79% of Python3 online submissions for Combination Sum IV.
#Memory Usage: 14 MB, less than 48.19% of Python3 online submissions for Combination Sum IV.

class Solution:
    def combinationSum4(self, nums: List[int], target: int) -> int:
    
        dp = [1]
        for t in range(1,target+1):
            dp.append(0)
            for n in nums:
                if t >= n:
                    dp[t] += dp[t-n]
        
        return dp[target]
