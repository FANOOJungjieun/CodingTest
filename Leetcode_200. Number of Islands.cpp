/*
Runtime: 64 ms, faster than 35.22% of C++ online submissions for Number of Islands.
Memory Usage: 12.4 MB, less than 44.87% of C++ online submissions for Number of Islands.
*/


class Solution {
public:
    bool check[301][301] = {false};
    int dr[4] = {0,0,1,-1};
    int dc[4] = {1, -1, 0,0};
    
    void dfs(int r, int c, vector<vector<char>>& grid) {
        check[r][c] = true;
        
        for(int i=0; i<4; i++) {
            int nr = r+dr[i];
            int nc = c+dc[i];
            
            if(nr<0 || nc<0 || nr >= grid.size() || nc >= grid[0].size()) continue;
            
            if(!check[nr][nc] && grid[nr][nc] == '1') {
                dfs(nr,nc,grid);
            }
        }
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
        int answer = 0;
        
        
        for(int i=0; i<grid.size(); i++) {
            for(int j=0; j<grid[0].size(); j++) {
                if(!check[i][j] && grid[i][j] == '1') {
                    answer++;
                    dfs(i,j,grid);
                }
            }
        }
        
        return answer;
    }
};
