/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Decode String.
Memory Usage: 6.3 MB, less than 88.62% of C++ online submissions for Decode String.
*/

class Solution {
public:
    string decodeString(string s) {
        string answer = "";
        stack<int> stkn;
        stack<char> stk;
        
        string num = "";
        
        for(int i=0; i<s.size(); i++) {
            if(isdigit(s[i])) {
                num += s[i];
            } else if(s[i] == '[') {
                stkn.push(stoi(num));
                stk.push(s[i]);
                num = "";
            } else if(s[i] == ']') {
                string tmp = "";
                
                while(true) {
                    if(stk.top() == '[') break;
                    
                    tmp += stk.top();
                    stk.pop();
                }
                stk.pop(); // [ pop
                
                int idx = stkn.top();
                stkn.pop();
                
                for(int i=0; i<idx; i++) {
                    for(int j = tmp.size()-1; j>=0; j--) {
                        stk.push(tmp[j]);
                    }
                }
                
            } else {
                stk.push(s[i]);
            }
            
        }
        
        while(!stk.empty()) {
                answer += stk.top();
                stk.pop();
        }
        
        reverse(answer.begin(),answer.end());
        return answer;
    }
};
