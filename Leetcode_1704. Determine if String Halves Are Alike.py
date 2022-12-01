class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        vowels = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']
        a = 0
        b = 0
        
        for idx in range(0, len(s)): # half a
            if s[idx] in vowels:
                if idx < len(s)/2:
                    a += 1
                else:
                    b += 1
                    
        return a==b
