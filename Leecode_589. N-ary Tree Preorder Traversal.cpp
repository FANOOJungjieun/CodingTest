/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> answer;
    
    void pod(Node* node) {
        answer.push_back(node->val);
        
        for(int i=0; i<node->children.size(); i++) {
            if(node->children[i] != NULL) {
                pod(node->children[i]);
            }
        }
    }
    
    vector<int> preorder(Node* root) {
        if(root == NULL) return answer;
        
        pod(root);
        return answer;
    }
};
