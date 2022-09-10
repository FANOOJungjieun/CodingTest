class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1) return 0;
        int currmin=prices[0];
        int ans=0;
        int currmax=-9999;
        
        
        for(int i=1;i<prices.size();i++){
            if(prices[i]<currmin){
               if(currmax>currmin) ans+=currmax-currmin;
                currmin=prices[i];
                currmax=-9999;
            }
            if(prices[i]<currmax) {
                ans+=currmax-currmin;
                currmin=prices[i];
                currmax=prices[i];
            }
            
            if(prices[i]>currmax) currmax=prices[i];
            
            
        }
        ans+=currmax-currmin;
        return ans;
    }
};
