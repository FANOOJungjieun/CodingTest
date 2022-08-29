# Runtime: 518 ms, faster than 43.20% of Python3 online submissions for Number of Islands.
# Memory Usage: 22.8 MB, less than 13.77% of Python3 online submissions for Number of Islands.

class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        dx = [0,0,1,-1]
        dy = [1,-1,0,0]
        TMP = 301
        check = [[0]*TMP for _ in range(TMP) ]
        answer = 0
        
        def dfs(nowX, nowY):
            for n in range(4):
                nx = nowX + dx[n]
                ny = nowY + dy[n]
                if nx < 0 or ny < 0 or nx >= len(grid) or ny >=len(grid[0]):
                    continue
                if grid[nx][ny] == '1' and check[nx][ny] == 0:
                    check[nx][ny] = 1
                    dfs(nx,ny)
        
        for x in range(len(grid)):
            for y in range(len(grid[0])):
                if check[x][y] == 0 and grid[x][y] == '1':
                    check[x][y] = 1
                    answer += 1
                    dfs(x,y)
        
        return answer
            
