#include <string>

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int output = 0;
        
        if(s == "") return output;
        
        for(int i=0; i<s.size(); i++) {
            string check = "";
            int tmp = 0;
            
            for(int j=i; j<s.size(); j++) {
                if(!check.compare("")) {
                    check += s[j];
                    tmp++;
                } else {
                    if(check.find(s[j]) == -1) {
                        check += s[j];
                        tmp++;
                    } else {
                        break;
                    }
                } 
            }
            
            if(tmp > output) output = tmp;
        }
        
        return output;
    }
};
