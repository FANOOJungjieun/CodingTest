/*
Runtime: 10 ms, faster than 73.39% of C++ online submissions for Find First and Last Position of Element in Sorted Array.
Memory Usage: 13.7 MB, less than 63.15% of C++ online submissions for Find First and Last Position of Element in Sorted Array.
*/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        
        vector<int> answer(2);
        
        answer[0]=-1;
        answer[1] = -1;
        
        while(start<=end) {
            int mid = (start + end)/2;
            
            if(nums[mid] == target) {
                if(mid==0 || (mid>0 && nums[mid-1] != target)) {
                    answer[0] = mid;
                    break;
                }
            }
            
            if(nums[mid] >= target) {
                end = mid-1;
            } else {
                start = mid+1;
            }
        }
        
        start = 0;
        end = nums.size()-1;
        
        while(start<=end) {
            int mid = (start + end)/2;
            
            if(nums[mid] == target) {
                if(mid==nums.size()-1 || (mid<nums.size()-1 && nums[mid+1] != target)) {
                    answer[1] = mid;
                    break;
                }
            }
            
            if(nums[mid] > target) {
                end = mid-1;
            } else {
                start = mid+1;
            }
        }
        
        return answer;
    }
};
