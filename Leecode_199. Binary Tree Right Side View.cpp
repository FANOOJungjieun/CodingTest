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
    vector<int> rightSideView(TreeNode* root) { //오른쪽에서 봤을 때 가장 먼저 보이는 노드 (무조건 오른쪽 노드가 아니다!)
        vector<int> answer;
        
        if(!root) {
            return answer;
        }
        
        queue<TreeNode*> Q;                     
        Q.push(root);
        
        while(!Q.empty()){                         
            int n = Q.size();                         
            while(n--){                                                         
                TreeNode* curr = Q.front();             
                Q.pop();                                
                
                if(n==0) answer.push_back(curr->val);   
                
                if(curr->left) Q.push(curr->left);     
                if(curr->right) Q.push(curr->right);    
            }
        }
        
        return answer;
    }
};
