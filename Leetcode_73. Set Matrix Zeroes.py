# Runtime: 143 ms, faster than 85.30% of Python3 online submissions for Set Matrix Zeroes.
# Memory Usage: 14.8 MB, less than 16.42% of Python3 online submissions for Set Matrix Zeroes.

class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        r = len(matrix)
        c = len(matrix[0])
        checkZero= [[0]*c for _ in range(r)]
        
        for i in range(r):
            for j in range(c):
                if matrix[i][j] == 0:
                    checkZero[i][j] = 1

        def makeZero(x, y):
            for i in range(c):
                matrix[x][i] = 0
            for i in range(r):
                matrix[i][y] = 0
        
        for i in range(r):
            for j in range(c):
                if matrix[i][j] == 0 and checkZero[i][j] == 1:
                    makeZero(i,j)
