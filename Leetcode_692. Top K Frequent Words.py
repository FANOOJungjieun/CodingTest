#Runtime: 62 ms, faster than 88.88% of Python3 online submissions for Top K Frequent Words.
#Memory Usage: 14 MB, less than 64.76% of Python3 online submissions for Top K Frequent Words.

class Solution:
    def topKFrequent(self, words: List[str], k: int) -> List[str]:
        words.sort()
        dic = Counter(words).most_common()
        answer = []
        
        for i in range(k):
            answer.append(dic[i][0])
            
        return answer
        
