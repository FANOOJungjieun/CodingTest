#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int l = 0, s = 0;
    
    for (int i=0; i<sizes.size(); i++) {
        if(min(sizes[i][0],sizes[i][1]) > s) s = min(sizes[i][0],sizes[i][1]);
        if(max(sizes[i][0],sizes[i][1]) > l) l = max(sizes[i][0],sizes[i][1]);
    }
    
    answer = l*s;
    return answer;
}
