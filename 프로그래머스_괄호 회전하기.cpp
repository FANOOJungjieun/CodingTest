#include <string>
#include <string.h>
#include <vector>
#include <stack>

using namespace std;

bool queue(vector<char> v) {
    stack<char> q;
    
    if(v[0] == '}' || v[0] == ')' || v[0] == ']') return false;
    
    q.push(v[0]);
    
    for(int i=1; i<v.size(); i++) {
        if(q.empty()) {
            q.push(v[i]);
            continue;
        }
        
        if(q.top() == '[' && v[i] == ']')  {
            q.pop();
        } else if (q.top() == '(' && v[i] == ')')  {
            q.pop();
        } else if(q.top() == '{' && v[i] == '}')  {
            q.pop();
        } else {
            q.push(v[i]);
        }
    }
    
    if(q.empty()) {
        return true;
    } else {
        return false;
    }
}

int solution(string s) {
    int answer = 0;
    vector<char> v;
    
    for(int i=0; i<s.size(); i++) {
        v.push_back(s[i]);
    }
    
    int len = v.size();
    
    for(int i=0; i<len; i++) {
        answer+=queue(v);
        char tmp = v[0];
        v.erase(v.begin());
        v.push_back(tmp);
    }
    return answer;
}
