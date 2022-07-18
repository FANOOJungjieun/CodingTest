class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, mn = 10000;
        
        for(int i=0; i<prices.size(); i++) {
            mn = min(prices[i], mn);
            profit = max(profit, prices[i]-mn);
        }
        
        return profit;
    }
};
