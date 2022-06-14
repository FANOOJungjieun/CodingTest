#include <string>
#include <vector>

using namespace std;

bool visit[9] = {false,};
int cnt = 0;
int answer = -1;

void dfs(vector<vector<int>> d, int k) {
    if(cnt > answer) answer = cnt;
    if(k<=0) return;
        
    for(int i=0; i<d.size(); i++) {
        if(!visit[i] && k >= d[i][0]) {
            visit[i] = true;
            cnt++;
            dfs(d,k - d[i][1]);
            cnt--;
            visit[i] = false;
        }
    }
}

int solution(int k, vector<vector<int>> dungeons) {
    
    dfs(dungeons, k);
    return answer;
}
