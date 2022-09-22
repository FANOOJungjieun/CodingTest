class Solution:
    def reverseWords(self, s: str) -> str:
        tmp = s.split()
        ans = []
        for t in tmp:
            ans.append(t[::-1])
        return " ".join(ans)
        
