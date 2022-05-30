#include<vector>
#include<queue>
using namespace std;

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

int solution(vector<vector<int> > maps)
{
    int answer = -1;
    queue<pair<int,int>> q;
    bool check[101][101];
    int dist[101][101];
    int row = maps.size();
    int col = maps[0].size();
    
    q.push(make_pair(0,0));
  //tuple은 효율성 충족하지 못하므로 dist배열 사용
    check[0][0] = 1;
    dist[0][0] = 1;
    
    while(!q.empty()) {
        int nx = q.front().first;
        int ny = q.front().second;
        q.pop();

        if(nx+1 == row && ny+1 == col) {
            return dist[nx][ny];
        }
        
        for(int i=0; i<4; i++) {
            int x = nx + dx[i];
            int y = ny + dy[i];
            
            if(x<0 || x>=row || y<0 || y>=col) continue;
            if(!maps[x][y]) continue;
            
            if(!check[x][y]) {
                check[x][y] = 1;
                q.push(make_pair(x,y));
                dist[x][y] = dist[nx][ny]+1;
            }
        }
        
    }
    
    return answer;
}
