#include <string>
#include <vector>

using namespace std;

int map[13]= {0, };
int answer = 0;

bool promising(int i) {
    int k = 1;
    while (k < i){        
        if (map[i] == map[k] || abs(map[i] - map[k]) == abs(i - k)) return 0;
        k++;    
    }    
    return 1;

}

void nqueen(int col, int n) {
    if(promising(col)) {
        if(col == n) {
            answer ++;
            return;
        } else {
            for(int i=1; i<=n; i++) {
                map[col+1] = i;
                nqueen(col+1, n);
            }
        }
    }
}

int solution(int n) {

    nqueen(0,n);
    
    return answer;
}
