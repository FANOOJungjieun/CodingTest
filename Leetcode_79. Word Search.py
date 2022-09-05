# Runtime: 8518 ms, faster than 31.78% of Python3 online submissions for Word Search.
# Memory Usage: 13.9 MB, less than 50.65% of Python3 online submissions for Word Search.

class Solution:
    
    def exist(self, board: List[List[str]], word: str) -> bool:
        dx = [0,0,1,-1]
        dy = [1,-1,0,0]
        check = [[0]*len(board[0]) for _ in range(len(board))]
        
        def dfs(x, y, w, idx) : # index를 추가해 backtracking으로 시간초과 해결
            if word[idx] != board[x][y] : return False
            if idx == len(word)-1 and w == word:
                return True
            
            for i in range(4):
                nx = x + dx[i]
                ny = y + dy[i]
                
                if nx < 0 or ny < 0 or nx >= len(board) or ny >= len(board[0]) : continue
                
                if check[nx][ny] == 0:
                    check[nx][ny] = 1
                    if dfs(nx,ny,w+board[nx][ny], idx+1): return True
                    check[nx][ny] = 0
            return False
        
        for i in range(len(board)):
            for j in range(len(board[0])):
                check[i][j] = 1
                if dfs(i,j,board[i][j],0): return True
                check[i][j] = 0
        return False
        
