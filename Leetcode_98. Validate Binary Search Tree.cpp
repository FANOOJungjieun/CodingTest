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
 
 Runtime: 29 ms, faster than 13.35% of C++ online submissions for Validate Binary Search Tree.
Memory Usage: 21.7 MB, less than 30.51% of C++ online submissions for Validate Binary Search Tree.
 
 */
class Solution {
public:
    bool solve (TreeNode* root,long long mini , long long maxi){
        if(root==NULL)
            return true;
        
        if(root->val>mini && root->val<maxi){
            bool left = solve(root->left,mini , root->val);
            bool right = solve(root->right, root->val,maxi);
            return left && right ;
            
        }
        return false;
    }
    bool isValidBST(TreeNode* root) {
        return solve(root,LONG_MIN,LONG_MAX);
    }
};
