# Runtime: 141 ms, faster than 46.02% of Python3 online submissions for Combination Sum.
# Memory Usage: 14.1 MB, less than 72.73% of Python3 online submissions for Combination Sum.


class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        answer = []
        
        def dfs(now, idx, sum):
            if sum > target:
                return
            if sum == target:
                answer.append(now)
                return
            for i in range(idx, len(candidates)):
                dfs(now+[candidates[i]], i, sum + candidates[i])
                
        dfs([],0, 0)
        return answer
            
            

        
