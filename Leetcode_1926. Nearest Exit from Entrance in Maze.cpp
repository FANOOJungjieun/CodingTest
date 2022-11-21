
// class Solution {
// public:
//     int dx[4] = {0,0,1,-1};
//     int dy[4] = {1,-1,0,0};
    
//     int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {

//         queue<array<int, 3>> q;
//         bool check[101][101] = {false};
//         q.push({entrance[0], entrance[1], 0});
        
//         while(!q.empty()){
//             int x = q.front()[0];
//             int y = q.front()[1];
//             int cnt = q.front()[2];
            
//             q.pop();
//             check[x][y] = true;
            
            
//             if(x==0 || y == 0 || x == maze.size()-1 || y == maze[0].size()-1) {
//                 if(x != entrance[0] || y != entrance[1]) return cnt;
//             }
            
//             for(int i =0; i<4;i++) {
//                 int nx = x+dx[i];
//                 int ny = y+dy[i];
                
//                 if(nx < 0 || nx >= maze.size() || ny < 0 || ny >= maze[0].size()) continue;
//                 if(maze[nx][ny] == '+' || check[nx][ny]) continue;
                
//                 q.push({nx,ny,cnt+1});
//             }
//         }
//         return -1;
//     }
// };

class Solution 
{
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& e)
    {
        int m = maze.size(), n = maze[0].size();
        int dirs[5] = {0, -1, 0, 1, 0};

        auto is_exit = [&](int i, int j) -> int
        {
            return (i!=e[0] || j!=e[1]) && (i*j==0 or i==m-1 or j==n-1);
        };
        
        deque<array<int,3>> dq = {{e[0],e[1],0}};
        
        while (!dq.empty())
        {
            auto [i,j,s] = dq.front(); dq.pop_front();
            
            for (int d = 0; d < 4; ++d)
            {
                int ii = i + dirs[d], jj = j + dirs[d + 1];
                if (ii < 0 or ii >= m or jj < 0 or jj >= n or maze[ii][jj] == '+')
                    continue;
                maze[ii][jj] = '+';
                if (is_exit(ii,jj)) return s+1;
                dq.push_back({ii,jj,s+1});
            }
        }
        
        return -1;
    }
};
