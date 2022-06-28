#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer(2,0);
    
    while(true) {
        string tmp = "";
        if(s == "1") break;
        
        for(int i=0; i<s.size(); i++) {
            if(s[i] == '0') answer[1]++;
            else tmp += "1";
        }
        
        int num = tmp.size();
        s = "";
        while(num > 0)
        {
            s += to_string(num % 2);
            num /= 2;
        }
        
        answer[0]++;
        
    }
    return answer;
}
