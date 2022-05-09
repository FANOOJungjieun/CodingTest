#include <string>
#include <vector>
#include <iostream>

using namespace std;

int m, n;

void rotation(vector<vector<int>> &key) {
    vector<vector<int>> tmp(m, vector<int>(m));
    
    for(int a=0; a<m; a++) {
        for(int b=0; b<m; b++) {
            tmp[a][b] = key[m-b-1][a];
        }
    }
    key = tmp;
}

bool check(int x, int y, vector<vector<int>> k, vector<vector<int>> l) {
    for(int i=0; i<m; i++) {
        for(int j=0; j<m; j++) {
            if(i+x >= 0 && i+x < n) {
                if(j+y >= 0 && j+y <n){
                    if(l[i+x][j+y] + k[i][j] != 1) {
                        return false;
                    } else {
                        l[i+x][j+y] += k[i][j]; // value로 참조된 배열은 함수 안에서만 변경된다.
                    }
                    }
                
            }
            
        }
    }
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            //cout << "(" << i << "," << j << ")" << l[i][j]<<endl;
            if(l[i][j] == 0) return false;
        }
    }
    return true;
}

bool solution(vector<vector<int>> key, vector<vector<int>> lock) {
    bool answer = false;
    m = key.size();
    n = lock.size();

    
    for(int i=0; i<4; i++) {
        rotation(key);
        for(int a=-m+1; a<n+1; a++) {
            for(int b=-m+1; b<n+1; b++) {
                answer = check(a,b, key, lock);
                if(answer == true) return answer;
            }
        }
    }
    return answer;
}
