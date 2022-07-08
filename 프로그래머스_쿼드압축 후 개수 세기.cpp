#include <string>
#include <vector>
#include <iostream>
using namespace std;

int one = 0;
int zero = 0;

void quard(int sx, int sy, int ex, int ey, vector<vector<int>> &arr) {
    //시간 초과를 막기 위해 arr을 주소로 참조
    int midx = (sx + ex)/2;
    int midy = (sy + ey)/2;
    
    //전부 같은 숫자인지 체크
    int c= 0;
    for(int i= sx; i<ex; i++) {
        for(int j= sy; j<ey; j++) {
            c += arr[i][j];
        }
    }
    if(c == (ex-sx)*(ex-sx) || c == 0) {
        if(c == 0) zero ++;
        else one ++;
        return;
    }
    
    quard(sx,sy,midx,midy,arr);
    quard(midx,sy,ex,midy,arr);
    quard(sx,midy,midx,ey,arr);
    quard(midx,midy,ex,ey,arr);
    
}

vector<int> solution(vector<vector<int>> arr) {
    vector<int> answer;
    
    quard(0,0,arr.size(),arr.size(),arr);
    
    answer.push_back(zero);
    answer.push_back(one);
    
    return answer;
}
