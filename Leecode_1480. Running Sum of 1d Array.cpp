class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int sum = 0;
        vector<int> answer;
        
        for(int i=0; i<nums.size(); i++) {
            answer.push_back(sum+nums[i]);
            sum += nums[i];
        }
        
        return answer;
    }
};
