#include <string>
#include <vector>

using namespace std;

int gcd(int n, int m) {
    int tmp = 0;
    int a=n, b=m;
    while (b != 0) {
        tmp = a%b;
        a = b;
        b = tmp;
    }
    return a;
}

int lcm(int n, int m) {
    return (n*m)/gcd(n,m);
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    answer.push_back(gcd(n,m));
    answer.push_back(lcm(n,m));
    return answer;
}
