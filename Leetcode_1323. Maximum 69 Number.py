class Solution:
    def maximum69Number (self, num: int) -> int:
        
        num = str(num)
        ans = ''
        check = True
        
        for n in num:
            if n == '6' and check == True:
                check = False
                ans += '9'
            else:
                ans += n
        
        return ans
        
