class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        ocurr = dict(Counter(arr))
        count = defaultdict(int)
        
        for k, v in ocurr.items():
            if count[v] != 0:
                return False
            else:
                count[v] += 1
        
        return True
