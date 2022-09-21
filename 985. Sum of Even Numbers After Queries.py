class Solution:
    def sumEvenAfterQueries(self, nums: List[int], queries: List[List[int]]) -> List[int]:
        s = sum(x for x in nums if x % 2 == 0) #nums중 짝수인 값의 합 : 초기값
        ans = []
        
        for val, idx in queries:
            if nums[idx] % 2 == 0: # 짝수이면
                s -= nums[idx] #기존의 값을 뺀다. 홀수면 s에 포함되어 있지 않으므로 패스.
            nums[idx] += val #기존의 값을 업데이트한다
            if nums[idx] % 2 == 0: # 업데이트 한 이후에도 짝수이면
                s += nums[idx] # 그 값을 추가한다
            ans.append(s)
        return ans
                
            
