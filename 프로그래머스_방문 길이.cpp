#include <string>
#include <map>
#include<iostream>
using namespace std;

map<char, int> dx = {{'U',0}, {'D', 0}, {'R', 1}, {'L', -1}};
map<char, int> dy= {{'U',1}, {'D', -1}, {'R', 0}, {'L', 0}};
bool check[11][11][11][11];

int solution(string dirs) {
    int answer = 0;
    int x = 5; //0
    int y = 5; //0
    
    for(int i=0; i<dirs.size(); i++) {
        int nx = x+dx[dirs[i]];
        int ny = y+dy[dirs[i]];
        
        if(nx < 0 || nx > 10 || ny <0 || ny > 10) continue;
        
        if(!check[x][y][nx][ny]) {
            answer++;
        }
        
        check[x][y][nx][ny] = true;
        check[nx][ny][x][y] = true;

        x = nx;
        y = ny;
    }
    
    return answer;
}
