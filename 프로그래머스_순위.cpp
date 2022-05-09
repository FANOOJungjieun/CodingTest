#include <string>
#include <vector>


using namespace std;

int solution(int n, vector<vector<int>> results) {
    int answer = 0;
    vector<vector<bool>> score(n+1, vector<bool>(n+1, false));
    
    for(int i=0; i< results.size(); i++) {
        score[results[i][0]][results[i][1]] = true;
    }
    
    for(int i=1; i<n+1; i++) {
        for(int j=1; j<n+1; j++) {
            for(int k=1; k<n+1; k++) {
                if(score[j][i] && score[i][k]) score[j][k] = true;
            }
        }
    } // 플로이드 와샬
    
    for(int i=1; i<n+1; i++) {
        int cnt = 0;
        for(int j=1; j<n+1; j++) {
            if(score[i][j] || score[j][i]) cnt++;
        }
        if(cnt == n-1) answer++;
    }
    
    return answer;
}
