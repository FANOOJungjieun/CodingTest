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


int solution(vector<int> arr) {
    int answer = arr[0];
    
    for(int i=1; i<arr.size(); i++) {
        int tmp = lcm(answer,arr[i]);
        answer = tmp;
    }
    return answer;
}
