#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    
    for(long long i = left; i<right+1; i++) {
        long long q = i/n;
        long long r = i%n;
        
        if(q>r) {
            answer.push_back(q+1);
        } else {
            answer.push_back(r+1);
        }
    }
    return answer;
}
