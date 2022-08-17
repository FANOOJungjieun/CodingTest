# Runtime: 75 ms, faster than 10.09% of Python3 online submissions for Unique Morse Code Words.
# Memory Usage: 13.8 MB, less than 75.48% of Python3 online submissions for Unique Morse Code Words.

class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        alpha = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        dic = []
        
        for w in words:
            tmp = ""
            for s in w:
                tmp += alpha[ord(s)-97]
            dic.append(tmp)
        
        
        return len(set(dic))
