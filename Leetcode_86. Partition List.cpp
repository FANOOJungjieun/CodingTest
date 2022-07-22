/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 
 
 Runtime: 4 ms, faster than 87.24% of C++ online submissions for Partition List.
Memory Usage: 10.5 MB, less than 11.89% of C++ online submissions for Partition List.

 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* answer = new ListNode();
        ListNode* ans = answer;
        vector<int> bigger;
        
        if(head == NULL) return head;
        
        while(head != NULL) {
            ListNode* nt = new ListNode();
            if(head->val < x) {
                nt->val = head->val;
                answer->next = nt;
                answer = answer->next;
            } else {
                bigger.push_back(head->val);
            }
            
            head = head->next;
        }
        
        
        for(int i=0; i<bigger.size(); i++) {
            ListNode* nt = new ListNode(bigger[i]);
            answer->next = nt;
            answer = answer->next;
        }
        
        return ans->next;
    }
};
