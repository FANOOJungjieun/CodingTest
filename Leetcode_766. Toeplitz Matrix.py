class Solution(object):
    def isToeplitzMatrix(self, matrix):
        return all(r == 0 or c == 0 or matrix[r-1][c-1] == val # 모든 경우의 수에서 전부 True면 True리턴
                   for r, row in enumerate(matrix)
                   for c, val in enumerate(row))
