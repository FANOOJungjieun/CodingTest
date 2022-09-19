# Runtime: 98 ms, faster than 91.53% of Python3 online submissions for Find Duplicate File in System.
# Memory Usage: 24 MB, less than 54.58% of Python3 online submissions for Find Duplicate File in System.

class Solution:
    def findDuplicate(self, paths: List[str]) -> List[List[str]]:
        d = defaultdict(list)
        answer = []
        
        for p in paths:
            tmp = p.split()
            rt = tmp[0]
            
            for idx in range(1, len(tmp)):
                t = tmp[idx].split('(')
                d[t[1]].append(rt + "/"+ t[0])
            
        for k, v in d.items():
            if len(v) > 1:
                answer.append(v)
                
        return answer
