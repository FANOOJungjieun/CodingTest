#Runtime: 1060 ms, faster than 18.37% of Python3 online submissions for My Calendar I.
#Memory Usage: 14.7 MB, less than 92.29% of Python3 online submissions for My Calendar I.

class MyCalendar:

    def __init__(self):
        self.calendar = []

    def book(self, start: int, end: int) -> bool:
        for s,e in self.calendar:
            if s<end and start<e:
                return False
        self.calendar.append((start,end))
        return True
        


# Your MyCalendar object will be instantiated and called as such:
# obj = MyCalendar()
# param_1 = obj.book(start,end)
