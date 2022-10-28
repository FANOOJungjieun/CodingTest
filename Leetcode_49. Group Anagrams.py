class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        
        anadict = defaultdict(list)                 
        
        for s in strs:                   
            ana = ''.join(sorted(s))
            anadict[ana].append(s)  
            
        return list(anadict.values())
