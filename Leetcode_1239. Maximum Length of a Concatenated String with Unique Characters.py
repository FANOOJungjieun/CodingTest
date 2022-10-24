class Solution:
    def maxLength(self, arr: List[str]) -> int:
        
        unique = []
        for s in arr:
            u = set(s)
            if len(u) == len(s): unique.append(u) # 단어의 모든 요소가 unique하면 리스트에 추가
        
        concat = [set()]
        for u in unique:
            for c in concat:
                if not c & u: # 비트 단위의 and 연산
                    concat.append(c | u) # 비트 단위의 or 연산
        
        return max(len(cc) for cc in concat)
