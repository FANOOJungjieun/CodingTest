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
    int answer = 0;
    
    void preorder(TreeNode* node) {
        if(node == NULL) return;
            
        answer++;
        
        if(node->left != NULL) preorder(node->left);
        if(node->right != NULL) preorder(node->right);
    }
    
    int countNodes(TreeNode* root) {
        preorder(root);
        return answer;
    }
};
