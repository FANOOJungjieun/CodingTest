class Solution:
    def minDeletionSize(self, strs: List[str]) -> int:
        answer = 0

        for s in zip(*strs):
            if list(s) != sorted(s):
                answer += 1

            
        return answer
