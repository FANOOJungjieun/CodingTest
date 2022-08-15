# Runtime: 23 ms, faster than 39.99% of C++ online submissions for Roman to Integer.
# Memory Usage: 6.1 MB, less than 64.52% of C++ online submissions for Roman to Integer.

class Solution {
public:
    int romanToInt(string s) {
        int answer = 0;
        for(int i=0 ; i<s.size(); i++) {
            if(s[i] == 'I') {
                if(i != s.size()-1){
                    if(s[i+1] == 'V' || s[i+1] == 'X') {
                        answer -= 1;
                    } else {
                        answer += 1;
                    }
                }else {
                    answer += 1;
                }
            }
            else if(s[i] == 'V') answer += 5;
            else if(s[i] == 'X') {
                if(i != s.size()-1){
                    if(s[i+1] == 'L' || s[i+1] == 'C') {
                        answer -= 10;
                    } else {
                        answer += 10;
                    }
                }else {
                    answer += 10;
                }
            }
            else if(s[i] == 'L') answer += 50;
            else if(s[i] == 'C') {
                if(i != s.size()-1){
                    if(s[i+1] == 'D' || s[i+1] == 'M') {
                        answer -= 100;
                    } else {
                        answer += 100;
                    }
                }else {
                    answer += 100;
                }
            }
            else if(s[i] == 'D') answer += 500;
            else if(s[i] == 'M') answer += 1000;
            
            cout << answer <<endl;
        }
        
        return answer;
    }
};
