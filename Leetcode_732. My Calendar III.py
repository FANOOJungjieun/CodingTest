from sortedcontainers import SortedList

class MyCalendarThree:

    def __init__(self):
        self.starts = SortedList([[0,0]]) # [시작점, 중복 이벤트의 수]
        self.res = 0

    def split(self, x: int) -> None:
        idx = self.starts.bisect_left([x,0]) # self.starts에서 [x,0]의 위치를 찾는 이분탐색(왼쪽우선)
        
        if idx < len(self.starts) and self.starts[idx][0] == x: # 만약 그 결과가 배열의 길이보다 작고 제대로 들어가 있으면
            return idx # 리턴
        
        self.starts.add([x,self.starts[idx-1][1]]) # 아닐 시, starts에 [ x, 직전 값의 중복 이벤트 수 ]추가

    def book(self, start: int, end: int) -> int:
        self.split(start)
        self.split(end) # 각 점을 인자로 해 split
        
        for interval in self.starts.irange([start,0], [end,0], (True,False)):
            interval[1] += 1 # start와 end 사이의 모든 값에 대해 중복 이벤트 수 추가
            self.res = max(self.res, interval[1]) # 현재 최대값과 interval의 값 비교

        return self.res
        


# Your MyCalendarThree object will be instantiated and called as such:
# obj = MyCalendarThree()
# param_1 = obj.book(start,end)
