class Solution:
    def longestPalindrome(self, s: str) -> int:
        luts = collections.Counter(s)
        ans = 0
        odd = 0
        
        for n in luts:
            ans += (luts[n]//2) *2
            if luts[n] %2 != 0:
                odd = 1
        return ans+odd
        
