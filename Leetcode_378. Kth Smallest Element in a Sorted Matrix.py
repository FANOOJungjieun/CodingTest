#Runtime: 235 ms, faster than 78.88% of Python3 online submissions for Kth Smallest Element in a Sorted Matrix.
#Memory Usage: 18.7 MB, less than 38.85% of Python3 online submissions for Kth Smallest Element in a Sorted Matrix.

class Solution:
    def kthSmallest(self, matrix: List[List[int]], k: int) -> int:
        answer = []
        for m in matrix:
            tmp = []
            for n in m:
                tmp.append(n)
            answer += tmp
        answer.sort()
        
        return answer[k-1]
        
