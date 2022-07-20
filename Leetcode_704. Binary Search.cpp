/*
Runtime: 61 ms, faster than 42.02% of C++ online submissions for Binary Search.
Memory Usage: 27.5 MB, less than 91.98% of C++ online submissions for Binary Search.
*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1;
        
        
        while(left<=right) {
            int mid = (left+right)/2;
            
            if(nums[mid] == target) return mid;
            
            if(nums[mid] > target) {
                right = mid-1;
            } else {
                left = mid+1;
            }
        }
        
        return -1;
    }
};
