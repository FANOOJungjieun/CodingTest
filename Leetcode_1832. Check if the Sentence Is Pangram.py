class Solution:
    def checkIfPangram(self, sentence: str) -> bool:
        
        if len(sentence) < 26:
            return False
        
        d = []
        
        for i in sentence:
            if i not in d:
                d.append(i)
        
        if len(d) == 26:
            return True
        else:
            return False
