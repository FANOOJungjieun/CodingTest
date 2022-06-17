#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    long long end, start;
    if(a>b) {
        end = a;
        start =b;
    } else {
        start = a;
        end = b;
    }
    
    for(long long i=start; i<=end; i++) {
        answer += i;
    }
    return answer;
}
