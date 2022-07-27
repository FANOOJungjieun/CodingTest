/*
Runtime: 3 ms, faster than 52.03% of C++ online submissions for Backspace String Compare.
Memory Usage: 6.4 MB, less than 44.28% of C++ online submissions for Backspace String Compare.
*/

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> sstack;
        stack<char> tstack;
        
        for(int i=0; i<s.size(); i++) {
            if(s[i] == '#') {
                if(!sstack.empty()) sstack.pop();
            } else {
                sstack.push(s[i]);
            }
        }
        
        for(int i=0; i<t.size(); i++) {
            if(t[i] == '#') {
                if(!tstack.empty()) tstack.pop();
            } else {
                tstack.push(t[i]);
            }
        }
        
        while(sstack.size() && tstack.size()) {
            
            if(sstack.top() != tstack.top()) return false;
            
            sstack.pop();
            tstack.pop();
        }
        
        if(sstack.size() || tstack.size()) return false;
        
        return true;

    }
};
