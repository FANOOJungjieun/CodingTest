/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Climbing Stairs.
Memory Usage: 6 MB, less than 56.42% of C++ online submissions for Climbing Stairs.

*/

class Solution {
public:
    int climbStairs(int n) {
        int dp[46];
        
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 3;
        
        for(int i=3; i<=n; i++) {
            dp[i] = dp[i-1]+dp[i-2];
        }
        
        return dp[n];
    }
};
