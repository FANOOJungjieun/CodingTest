class Solution:
    def findWinners(self, matches: List[List[int]]) -> List[List[int]]:
        lose = collections.defaultdict(int)
        seen = set()
        
        for m in matches:
            lose[m[1]] += 1
            seen.add(m[0])
            seen.add(m[1]) # member 추가
        
        lose_one, lose_zero = [], []
        
        for s in seen:
            count = lose[s]
            if count == 0:
                lose_zero.append(s)
            elif count == 1:
                lose_one.append(s)
                
        
        return [sorted(lose_zero), sorted(lose_one)]
