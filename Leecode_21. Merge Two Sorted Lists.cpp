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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        bool l1check = false;
        bool l2check= false;
        
        if(list1 == NULL && list2 == NULL) return list1;
        
        if(list1 == NULL && list2 != NULL) {
            return list2;
        } else if(list1 != NULL && list2 ==NULL) {
            return list1;
        }
        
        ListNode* node = new ListNode();
        ListNode* answer = node;
        
        while(true) {
            
            if(l1check && !l2check) {
                node->val = list2->val;
                if(list2->next == NULL) l2check = true;
                else list2 = list2->next;
            } else if (!l1check && l2check) {
                node->val = list1->val;
                if(list1->next == NULL) l1check = true;
                else list1 = list1->next;
            } else{
                if(list1->val < list2->val) {
                    node->val = list1->val;
                    if(list1->next == NULL) l1check = true;
                    else list1 = list1->next;
                } else {
                    node->val = list2->val;
                    if(list2->next == NULL) l2check = true;
                    else list2 = list2->next;
                }
            }
        
            if(l1check && l2check) break;
            
            
            ListNode* next = new ListNode();
            node->next = next;
            node = node->next;
            
        }
        
        return answer;
    }
};
