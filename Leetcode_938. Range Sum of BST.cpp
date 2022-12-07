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

    void inorder(TreeNode* node, int low, int high) {
        if(node) {
            inorder(node->right, low, high);
            
            if(node->val >= low && node->val <= high) {
                answer += node->val;
            }
            inorder(node->left, low, high);
        }
    }

    int rangeSumBST(TreeNode* root, int low, int high) {
        
        inorder(root,low,high);

        return answer;
    }
};
