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
