class TimeMap:

    def __init__(self): # 초기화
        self.kt_map = {} 

    def set(self, key: str, value: str, timestamp: int) -> None:
        if key not in self.kt_map:
            self.kt_map[key] = [] # 키가 없을 시 생성함
            
        self.kt_map[key].append([timestamp,value]) # key에 따른 시간과 값 쌍을 저장함

    def get(self, key: str, timestamp: int) -> str:
        if key not in self.kt_map or timestamp < self.kt_map[key][0][0]: # 요청한 키가 없을 시, 주어진 시간보다 적은 시간이 없을시 빈 문자열 리턴
            return "" 
        
        left = 0
        right = len(self.kt_map[key])
        
        # 이진탐색
        while left<right:
            mid = (left+right)//2
            if self.kt_map[key][mid][0] <= timestamp: # mid번째 쌍의 시간이 주어진 것보다 작으면
                left = mid+1
            else:
                right = mid
        return "" if right == 0 else self.kt_map[key][right-1][1]


# Your TimeMap object will be instantiated and called as such:
# obj = TimeMap()
# obj.set(key,value,timestamp)
# param_2 = obj.get(key,timestamp)
