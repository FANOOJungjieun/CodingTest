#include <string>
#include <vector>

using namespace std;

bool isCorrect(string s) {
    int cnt =0;
    for(int i=0; i<s.size(); i++) {
        if(s[i] == '(') {
            cnt ++;
        } else {
            cnt --;
        }
        
        if(cnt < 0) return false;
    }
    
    return true;
}

string solution(string p) {
    if(p=="") return "";
    
    string answer="";
    string u, v;
    int cnt =0;
    
    for(int i=0; i<p.size(); i++) {
        if(p[i] == '(') {
            cnt++;
        } else {
            cnt--;
        }
        
        if(!cnt) {
            u = p.substr(0,i+1);
            v = p.substr(i+1);
            break;
        }
    }
    
    if(isCorrect(u)) {
        return u+solution(v);
    } else {
        answer = "(" + solution(v) + ")";
        
        for(int i=1; i<u.size()-1; i++) {
            if(u[i] == '(') {
                answer+= ')';
            } else {
                answer+= '(';
            }
        }
    }
    
    return answer;
}
