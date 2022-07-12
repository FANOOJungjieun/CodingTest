class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        
        if(x<0) return false;
        
        int mid;
        
        if(s.size()%2 == 0) {
            mid = s.size()/2;
        }else {
            mid  = (s.size()/2) + 1;
        }
        
        for(int i=0; i<mid; i++) {
            if(s[i] != s[s.size()-1-i]) return false;
        }
        return true;
    }
};
