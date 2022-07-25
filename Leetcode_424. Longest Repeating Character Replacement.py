#
# Runtime: 541 ms, faster than 7.05% of Python3 online submissions for Longest Repeating Character Replacement.
# Memory Usage: 13.9 MB, less than 93.21% of Python3 online submissions for Longest Repeating Character Replacement.
#

class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        scounter = Counter()
        answer = 0
        start = 0
        
        for end in range(1,len(s)+1):
            scounter[s[end-1]] += 1
            most = scounter.most_common(1)[0][1]
            remain = end - start - most
            
            if remain > k :
                scounter[s[start]] -= 1
                start += 1
            answer = max(end-start, answer)
    
        return answer
        
        
