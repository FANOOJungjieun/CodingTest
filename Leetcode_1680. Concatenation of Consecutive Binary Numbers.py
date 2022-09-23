class Solution:
    def concatenatedBinary(self, n: int) -> int:
        tmp = ""
        
        for i in range(1,n+1):
            tmp += format(i,'b')
        
        return (int(tmp,2))%1000000007
        
