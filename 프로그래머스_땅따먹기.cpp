#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int> > land)
{
    int answer = 0;
    int dp[4];
    int tmp[4];
    
    dp[0] = land[0][0];
    dp[1] = land[0][1];
    dp[2] = land[0][2];
    dp[3] = land[0][3];
    
    for(int i=1; i<land.size(); i++) {
        for(int a=0; a<4; a++) {
            int mx = 0;
            for(int b=0; b<4; b++) {
                if(a != b) mx = max(mx,dp[b]);
            }
            tmp[a] = mx+land[i][a];
        }
        for(int a=0;a<4;a++) {
            dp[a] = tmp[a];
        }
    }
    
    for(int i=0; i<4; i++) {
        if(dp[i] > answer) answer = dp[i];
    }
    return answer;
}
