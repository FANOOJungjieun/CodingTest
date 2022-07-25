/*
Runtime: 5 ms, faster than 18.38% of C++ online submissions for Unique Paths.
Memory Usage: 5.9 MB, less than 73.52% of C++ online submissions for Unique Paths.
*/

class Solution {
public:
    int uniquePaths(int m, int n) {
        int dp[101][101];
    
        
        for(int i=0;i<101;i++) {
            for(int j=0; j<101; j++) {
                dp[i][j] = 0;
            }
        }
        
        dp[1][1] = 1;
        
        
        for(int i=1; i<=m; i++) {
            for(int j=1; j<=n; j++) {
                if(i-1>0) dp[i][j] += dp[i-1][j];
                if(j-1>0) dp[i][j] += dp[i][j-1];
            }
        }
        
        return dp[m][n];
    }
};
