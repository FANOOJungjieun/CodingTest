#include <string>
#include <vector>

using namespace std;

string three[4] = {".","1","2","4"};

string solution(int n) {
    string answer = "";
    vector<int> v;
    int t = n;
    
    while(t) {
        int tmp = t%3;
        if(tmp == 0) {
            tmp = 3;
            v.push_back(tmp);
            t =(t/3) -1;
            continue;
        }
        v.push_back(tmp);
        t = t/3;
    }
    
    for(int i= v.size()-1; i>=0; i--) {
        answer += three[v[i]];
    }
    return answer;
}
