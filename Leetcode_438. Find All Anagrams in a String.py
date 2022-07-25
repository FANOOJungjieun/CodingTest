#
#Runtime: 527 ms, faster than 18.38% of Python3 online submissions for Find All Anagrams in a String.
#Memory Usage: 15.3 MB, less than 33.28% of Python3 online submissions for Find All Anagrams in a String.
#


class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        answer = []
        m, n = len(s), len(p)
        if m<n:
            return answer
        
        scounter = Counter(s[:n-1])
        pcounter = Counter(p)
        
        end = 0
        
        for end in range(n-1,m):
            start = end -(n-1)
            
            scounter[s[end]] += 1
            
            if scounter == pcounter:
                answer.append(start)
            
            scounter[s[start]] -= 1
            
            if scounter[s[start]] == 0:
                del scounter[s[start]]
        
        return answer
