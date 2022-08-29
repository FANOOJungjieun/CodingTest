# Runtime: 115 ms, faster than 85.30% of Python3 online submissions for Minimum Path Sum.
# Memory Usage: 15.7 MB, less than 84.17% of Python3 online submissions for Minimum Path Sum.

class Solution:
    def minPathSum(self, grid: List[List[int]]) -> int:
        r = len(grid)
        c = len(grid[0])
        dp = [[0]*c for _ in range(r)]
        
        dp[0][0] = grid[0][0]
        
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                dp[i][j] = grid[i][j]
                if i-1 < 0 and j-1 >=0:
                    dp[i][j] += dp[i][j-1]
                if j-1 < 0 and i-1 >= 0:
                    dp[i][j] += dp[i-1][j]
                if i-1 >= 0 and j-1 >=0:
                    dp[i][j] += min(dp[i][j-1],dp[i-1][j])
                    
        return dp[r-1][c-1]
      
