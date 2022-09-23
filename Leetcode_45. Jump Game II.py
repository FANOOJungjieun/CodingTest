class Solution:
    def jump(self, nums: List[int]) -> int:
        n = len(nums)                   # number of elements
        dp = [0] * (n)

        for i in range(n):
            for j in range(1,nums[i]+1):
                if i+j >= n: #예외처리
                    continue
                if dp[i+j] == 0: # 이전 단계에서 밟은 곳은 밟지않음(이미 최소값이 존재함)
                    dp[i+j] = dp[i]+1
        return dp[n-1]
