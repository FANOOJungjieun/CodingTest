#include <string>
#include <vector>

using namespace std;

string arr[] = {"zero", "one", "two", "three", "four", "five","six","seven", "eight", "nine"};

int solution(string s) {
    int answer = 0;
    vector<int> ans;
    
    while(!s.empty()) {
        if(s.at(0) >= 48 && s.at(0) < 58) {
            ans.push_back(s.at(0)-48);
            s = s.substr(1);
            continue;
        } // at : value값을 불러옴
        
        for(int i=0; i<10; i++) {
            if(s.find(arr[i])==0){
                ans.push_back(i);
                s = s.substr(arr[i].size());
                break;
            }
        }
    }
    
    for(int i=0; i<ans.size(); i++) {
        if(i==0) {
            answer = ans[i];
        } else {
            answer = (answer *10) + ans[i];
        }
    }
    
    return answer;
}
