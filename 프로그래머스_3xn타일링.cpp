#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    long int dp[5001];
    long add = 0;
    dp[0] = 1;
    dp[2] = 3;
    dp[4] = 11;
    
    if(n%2 == 1) return 0;
    
    for(int i=4; i<=n; i += 2) {
        add += dp[i-4]*2;
        dp[i] = dp[i-2]*3 + add;
        
        add %= 1000000007;
        dp[i] %= 1000000007;
    }
    return dp[n];
}
