/*

Runtime: 3 ms, faster than 97.37% of C++ online submissions for Min Cost Climbing Stairs.
Memory Usage: 13.7 MB, less than 48.06% of C++ online submissions for Min Cost Climbing Stairs.


*/

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int dp[1001];
        int ans = cost.size();
        
        dp[0] = cost[0];
        dp[1] = cost[1];
        
        for(int i=2; i<ans; i++) {
            dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
        }
        
        dp[ans] = min(dp[ans-1], dp[ans-2]);
        
        return dp[ans];
    }
};
