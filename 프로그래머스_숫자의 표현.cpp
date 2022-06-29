#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for(int i=1; i<=n; i++) {
        int cnt = i;
        int sum = 0;
        
        while(sum <= n) {
            if(sum==n) break;
            
            sum += cnt;
            cnt++;
        }
        
        if(sum == n) {
            answer++;
        }
    }
    return answer;
}
