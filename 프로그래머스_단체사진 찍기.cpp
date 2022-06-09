#include <string>
#include <vector>

using namespace std;
char name[] = {'A', 'C', 'F', 'J', 'M', 'N', 'R', 'T'};
char line[] = {'0', '0', '0', '0', '0', '0', '0', '0'};
int answer;

int index(char ch) {
    for(int i=0; i<8; i++) {
        if(line[i] == ch){
            return i;
        }
    }
    return -1;
}

bool isValid(string s) {
    char p1 = s[0];
    char p2 = s[2];
    char ops = s[3];
    int len = s[4] - 48;
    int gap = index(s[0]) - index(s[2]);
    
    if (gap < 0) gap = -gap;
    
    if(ops == '=' && gap == len+1) return true;
    else if(ops == '<' && gap < len+1) return true;
    else if(ops == '>' && gap > len+1) return true;
    return false;
}

void dfs(int r, int n, vector<string> data) { //dfs
    if(r == 8) {
        for(int i=0; i<n; i++) {
            if(!isValid(data[i])) return;
        }
        answer++;
        return;
    }
    
    for(int i=0; i<8; i++) {
        if(index(name[i]) == -1) {
            line[r] = name[i];
            dfs(r+1, n , data);
            line[r] = 0;
        }
    }
}

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
int solution(int n, vector<string> data) {
    answer = 0;
    dfs(0, n, data);
    return answer;
}
