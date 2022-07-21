/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 
 Runtime: 0 ms, faster than 100.00% of C++ online submissions for Reverse Linked List II.
Memory Usage: 7.5 MB, less than 63.80% of C++ online submissions for Reverse Linked List II.
 
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* node = head;
        ListNode* answer = new ListNode();
        ListNode* ans = answer;
        
        vector<int> reverse;
        int idx = 1;
        
        while(node != NULL) {
            if(idx>=left && idx <=right) {
                reverse.push_back(node->val);
            }
            idx++;
            node = node->next;
        }
        
        node = head;
        idx = 1;
        int cnt = reverse.size()-1;
        
        while(node != NULL) {
            ListNode* tmp = new ListNode();
            if(idx>=left && idx <=right) {
                tmp->val = reverse[cnt];
                cnt--;
            } else {
                tmp->val = node->val;
            }
            
            idx++;
            node = node->next;
            answer->next = tmp;
            answer = answer->next;
        }
        
        return ans->next;
    }
};
