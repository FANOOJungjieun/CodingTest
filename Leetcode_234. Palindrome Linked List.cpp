/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 
 
 
 Runtime: 323 ms, faster than 65.61% of C++ online submissions for Palindrome Linked List.
Memory Usage: 128.3 MB, less than 14.42% of C++ online submissions for Palindrome Linked List.


 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        
        ListNode* now = head;
        if(head->next == NULL) return true;
            
        while(now != NULL) {
            
            v.push_back(now->val);
            
            now = now->next;
            
        } 
        
        for(int i=0; i<v.size(); i++) {
            if(v[i] != v[v.size()-1 -i]) return false;
        }
        return true;
        
    }
};
