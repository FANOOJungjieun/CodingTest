/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    TreeNode* BST(vector<int>& nums, int low, int high){
        if(low>high) return NULL;
        
        int mid = low + (high - low)/2;
        
        return new TreeNode(
            nums[mid],
            BST(nums, low, mid - 1),
            BST(nums, mid + 1, high)
        );
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return BST(nums, 0, nums.size() - 1);
    }
};
