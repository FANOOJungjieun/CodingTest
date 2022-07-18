/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* answer = new ListNode();
        ListNode* idx = answer;
        
        vector<int> ans;
        
        if(head == NULL) return answer->next;
        
        while(true) {            
            ans.push_back(head->val);
            
            if(head->next == NULL) break;
            head = head->next;
        }
        
        for(int i=ans.size()-1; i>=0; i--) {
            ListNode* node = new ListNode(ans[i]);
            idx->next = node;
            idx = idx->next;
        }
        
        return answer->next;
    }
};
