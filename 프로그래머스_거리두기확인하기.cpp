#include <string>
#include <vector>
#include <queue>
#include<iostream>

using namespace std;

int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};

bool bfs(vector<string> p, int a, int b) {
    queue<pair<pair<int,int>,int>> q;
    bool ch[5][5] = {false,};
    
    q.push(make_pair(make_pair(a,b),0));
    ch[a][b] = 1;

    while(!q.empty()) {
        int x = q.front().first.first;
        int y = q.front().first.second;
        int d = q.front().second;
        q.pop();
        
        if(d >= 2) continue;
        
        for(int i=0; i<4; i++) {
            int nx = x+dx[i];
            int ny = y+dy[i];
            if(nx<0 || nx> 4 || ny<0 || ny >4) continue;
            
            if(!ch[nx][ny]){
                if(p[nx][ny] == 'P') {
                    return false;
                } else if(p[nx][ny] == 'O') {
                    q.push(make_pair(make_pair(nx,ny),d+1));
                    ch[nx][ny] = 1;
                }
            }
        }
    }
    
    
    return true;
}

int find_answer(vector<string> p) {
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            if(p[i][j] == 'P') {
                if(bfs(p,i,j) == false) {
                    return 0;
                }
            }
        }
    }
    return 1;
}

vector<int> solution(vector<vector<string>> places) {
    vector<int> answer;
    
    bool flag = true;
    for(int i=0; i<places.size(); i++) {
        answer.push_back(find_answer(places[i]));
    }
    return answer;
}
