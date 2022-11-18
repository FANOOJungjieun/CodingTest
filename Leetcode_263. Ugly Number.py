class Solution:
    def isUgly(self, n: int) -> bool:
        if n<=0:
            return False
        
        def prime(d,r):
            while d % r == 0:
                d //=r
            return d
        
        
        for i in [2,3,5]:
            n = prime(n,i)
            
        
        return n == 1
