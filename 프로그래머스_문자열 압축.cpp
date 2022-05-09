#include <string>
#include <vector>
#include<algorithm>

using namespace std;


int solution(string s) {
    int answer = 999;
    
    if(s.size() == 1) {
        answer = 1;
        return answer;
    }
    for(int i=1; i<s.size()/2+1; i++) { //i=sub size
        string s1 = s;
        vector<int> cnt;
        int tmp = 1; //compression rate
        int result = 0;
        int last = 0;
        
        while(!s1.empty()) {
            if(i > s1.size()) {
                last = s1.size();
                break;
            }
            string sub = s1.substr(0,i);
            s1 = s1.substr(i);
            if(!s1.find(sub)&&!s1.empty()) {
                tmp++;
            } else {
                cnt.push_back(tmp);
                tmp =1;
            }
        }
        
        result = cnt.size()*i;
        
        for(int k=0; k< cnt.size(); k++) {
            if(cnt[k] != 1) {
                string t = to_string(cnt[k]);
                result += t.size();
            }
        }
        
        
        if(result+last < answer) {
            if(result+last < s.size()) {
                answer = result+last;
            } else {
                answer = s.size();
            }
        }
    }
    
    
    return answer;
}
