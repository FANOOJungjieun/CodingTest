#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for(int i=0; i<s.size(); i++) {
        if(s[i] == ' ') {
            answer += " ";
            continue;
        }
        char tmp;
        char add;
        
        if(s[i] >= 'A' && s[i] <= 'Z') tmp = 'A';
        if(s[i] >= 'a' && s[i] <= 'z') tmp = 'a';
        
        if(tmp == 'A' && s[i]+n > 'Z') add = s[i]+n-26;
        else if(tmp == 'a' && s[i]+n > 'z') add = s[i]+n-26;
        else add = s[i]+n;
        
        answer += add;
    }
    return answer;
}
