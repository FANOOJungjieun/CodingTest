#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    stack<char> stk;

    if(s[0] == ')') return false;
    
    stk.push(s[0]);
    
    for(int i=1; i<s.size(); i++) {
        if(s[i] == ')') {
            if(stk.empty()) {
                return false;
            } else {
                stk.pop();
            }
        } else {
            stk.push(s[i]);
        }
    }
    
    if(stk.empty()) return true;
    else return false;
    
}
