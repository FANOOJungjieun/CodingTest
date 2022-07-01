#include <string>
#include <vector>

using namespace std;

int solution(string word) {
    int answer = 0;
    string base = "AEIOU";
    int num[5] = { 781, 156, 31, 6, 1 };
    for(int i=0;i<word.size();i++) {
        int idx = base.find(word[i]);
        answer += idx * num[i];
    }
    return answer + word.size();
}
