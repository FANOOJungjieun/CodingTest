class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int sum = 0;
        
        for(int i=0; i<nums.size(); i++) {
            sum += nums[i];
        }
        
        int rsum = 0;
        
        for(int pi=0; pi<nums.size(); pi++) {
            if(rsum == sum - rsum - nums[pi]) return pi;
            rsum += nums[pi];
        }
        
        return -1;
    }
};
