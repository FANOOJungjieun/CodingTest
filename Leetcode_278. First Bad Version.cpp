// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

/*
Runtime: 4 ms, faster than 24.21% of C++ online submissions for First Bad Version.
Memory Usage: 5.9 MB, less than 22.06% of C++ online submissions for First Bad Version.
*/

class Solution {
public:
    int firstBadVersion(int n) {
        long int l = 1; long int r = n;
        
        while(l<=r) {
            long int m = (l+r)/2;
            
            if(!isBadVersion(m-1) && isBadVersion(m)) return m;
            
            if(isBadVersion(m)) {
                r = m-1;
            } else {
                l = m+1;
            }
        }
        
        return -1;
    }
};
