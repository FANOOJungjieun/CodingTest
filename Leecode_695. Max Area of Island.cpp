class Solution {
public:
    
    int dx[4]= {0,0,1,-1};
    int dy[4] = {1,-1,0,0};
    int answer = 0;
    
    bool map[51][51] = {false,};
    
    void bfs(int x, int y, vector<vector<int>>& g) {
        queue<pair<int,int>> q;
        int cnt = 0;
        q.push(make_pair(x,y));
        
        while(!q.empty()) {
            int nowx = q.front().first;
            int nowy = q.front().second;
            
            q.pop();
            
            cnt++;
            
            for(int i=0; i<4; i++) {
                int nextx = nowx+dx[i];
                int nexty = nowy+dy[i];
                
                if(nextx>=g.size() || nextx < 0 || nexty >= g[0].size() || nexty < 0) continue;
                
                if(g[nextx][nexty] == 1 && !map[nextx][nexty]) {
                    map[nextx][nexty] = true;
                    q.push(make_pair(nextx,nexty));
                }
            }
        }
        
        if(cnt > answer) answer = cnt;
        return;
        
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        for(int i=0; i<grid.size(); i++) {
            for(int j=0; j<grid[0].size(); j++) {
                if(grid[i][j] == 1 && !map[i][j]) {
                    map[i][j] = true;
                    bfs(i,j,grid);
                }
            }
        }
        
        return answer;
    }
};
