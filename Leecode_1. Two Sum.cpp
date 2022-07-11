class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*brute force
        
        vector<int> arr = nums;
        vector<int> answer(2);
        
        for(int i=0; i<arr.size(); i++) {
            for(int j =0; j<arr.size(); j++) {
                if(i != j) {
                    if(arr[i]+arr[j] == target) {
                        answer[0] = i;
                        answer[1] = j;
                        return answer;
                    }
                }
            }
        }
        
        */
        
        unordered_map<int,int> res;
        for(int i=0; i<nums.size(); i++) {
            int diff = target-nums[i];
            auto it = res.find(diff);
            if(it != res.end()) {
                return {res[diff], i};
            } else {
                res[nums[i]] = i;
            }
        }
        return {};
    }
};
