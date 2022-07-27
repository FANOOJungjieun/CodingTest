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
 
 Runtime: 5 ms, faster than 84.33% of C++ online submissions for Flatten Binary Tree to Linked List.
Memory Usage: 12.7 MB, less than 38.74% of C++ online submissions for Flatten Binary Tree to Linked List.
 
 */
class Solution {
public:
    TreeNode* prev;
    
    void flatten(TreeNode* root) {
        
        if(root == NULL) return;
        
        flatten(root->right);
        flatten(root->left);
        root->right = prev;
        root->left = nullptr;
        prev = root;
    }
};
