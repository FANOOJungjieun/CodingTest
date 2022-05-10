#include <vector>

using namespace std;

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
int check[101][101];
int cnt=0;

void dfs(int x, int y, vector<vector<int>> v) {
    if(check[x][y]) return;
    
    check[x][y] = 1;
    cnt++;
    
    for(int i=0; i<4; i++) {
        int nx = dx[i] + x;
        int ny = dy[i] +y;
        
        if(nx < 0 | ny < 0 | nx >= v.size() | ny >= v[0].size()) continue;
        
        if(v[x][y] == v[nx][ny] && check[nx][ny] == 0) {
            dfs(nx,ny,v);
        }
    }
}
// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
vector<int> solution(int m, int n, vector<vector<int>> picture) {
    int number_of_area = 0;
    int max_size_of_one_area = 0;
    dx[0] = 0;
    dy[0] = 1;
    dx[1] = 0;
    dy[1] = -1;
    dx[2] = 1;
    dy[2] = 0;
    dx[3] = -1;
    dy[3] = 0;
    
    cnt = 0;
    
    for(int i=0; i<101; i++) {
        for(int j=0; j<101; j++) {
            check[i][j] =0;
        }
    }
    
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++){
            if(picture[i][j] && !check[i][j]) {
                number_of_area++;
                dfs(i,j,picture);
            }
            if(cnt > max_size_of_one_area) {
                max_size_of_one_area = cnt;
            }
            cnt = 0;
        }
    }
    
    vector<int> answer(2);
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
    return answer;
}
