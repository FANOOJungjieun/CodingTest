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
 
 
 Runtime: 0 ms, faster than 100.00% of C++ online submissions for Binary Tree Inorder Traversal.
Memory Usage: 8.5 MB, less than 40.38% of C++ online submissions for Binary Tree Inorder Traversal.


 */
class Solution {
public:
    vector<int> answer;
    
    void inorder(TreeNode* node) {
        if(node->left != NULL) inorder(node->left);
        answer.push_back(node->val);
        if(node->right != NULL) inorder(node->right);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        if(root == NULL) return answer;
        
        inorder(root);
        
        return answer;
    }
};
