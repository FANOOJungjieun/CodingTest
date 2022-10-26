class Solution:
    def checkSubarraySum(self, nums: List[int], k: int) -> bool:
        hash_map = {0: 0}
        s = 0
        
        for i in range(len(nums)):
            s += nums[i]
            
            # s%k는 추가된 nums[i]의 합이(subarray의 합이) k와 같아질 때마다, 이전에 저장한 값의 나머지와 동일해진다.
            # 처음 발견된 s%k값을 i+1번으로 해시맵에 저장하고, 검색된 s%k의 value값이 현재 i값보다 작으면 위 조건을 만족한다 보고 True를 리턴한다.
            if s % k not in hash_map:
                hash_map[s % k] = i + 1
            elif hash_map[s % k] < i: # s%k가 해시맵에 존재하고, 그 값이 i보다 작으면(subarray의 길이가 최소 2면)
                return True

        return False
