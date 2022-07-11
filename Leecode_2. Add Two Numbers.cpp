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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* answer = new ListNode();
        ListNode* ans = answer;
        int carry = 0;
        
        bool l1end = false;
        bool l2end = false;
        
        while(!l1end || !l2end || carry != 0) {
            int sum = 0;
            
            if(!l1end) {
                sum += l1->val;
            } 
            if(!l2end) {
                sum += l2->val;
            }
            
            sum += carry;
            carry = sum/10;
            
            ans->next = new ListNode(sum%10);
            ans = ans->next;
            
            if(l1->next) {
                l1 = l1->next;
            } else {
                l1end = true;
            }
            
            if(l2->next){
                l2= l2->next;
            } else {
                l2end= true;
            }
            
        }
        return answer->next;
    }
};
