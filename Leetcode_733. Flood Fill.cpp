/*

Runtime: 7 ms, faster than 94.91% of C++ online submissions for Flood Fill.
Memory Usage: 14 MB, less than 48.67% of C++ online submissions for Flood Fill.

*/


class Solution {
public:
    
    int dr[4] = {0,0,1,-1};
    int dc[4] = {1,-1,0,0};
    
    void dfs(int r, int c, int color, int sc, vector<vector<int>>& image) {
        
        image[r][c] = color;
        
        for(int i=0; i<4; i++) {
            int nr = r + dr[i];
            int nc = c + dc[i];
            
            if(nr<0 || nc < 0 || nr >= image.size() || nc >= image[0].size()) continue;
            
            if(image[nr][nc] != color && image[nr][nc] == sc) {
                dfs(nr,nc,color,sc,image);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        dfs(sr,sc,color,image[sr][sc],image);
        
        return image;
    }
};
