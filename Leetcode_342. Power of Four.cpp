# Runtime: 4 ms, faster than 40.16% of C++ online submissions for Power of Four.
# Memory Usage: 6 MB, less than 24.97% of C++ online submissions for Power of Four.


class Solution {
public:
    bool check(int n) {
        while(n>4) {
            if(n%4 != 0) return false;
            
            n = n/4;
        }
        
        if (n != 4) return false;
        
        return true;
    }
    bool isPowerOfFour(int n) {
        if(n == 1) return true;
        return check(n);
    }
};
