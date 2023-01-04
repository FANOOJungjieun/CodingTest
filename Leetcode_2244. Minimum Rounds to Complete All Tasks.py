
class Solution:
    def minimumRounds(self, tasks: List[int]) -> int:
        freq = Counter(tasks).values()
        answer = 0

        if 1 in freq:
            return -1

        for f in freq:
            answer += (f+2)//3

        return answer
