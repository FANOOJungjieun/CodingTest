/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        map<ListNode*, int> m;
        ListNode* node = head;
        
        int idx = 0;
        
        if(head == NULL) return NULL;
        
        while(true) {
            if(m.find(node) != m.end()) {
                return node;
            } else {
                m[node] = idx;
                idx++;
                
                if(node->next == NULL) return NULL;
                node = node->next;
            }
        }
    }
};
