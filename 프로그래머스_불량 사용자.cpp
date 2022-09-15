#include <string>
#include <vector>
#include <set>
#include <iostream>
//next_permutation은 너무 느림
using namespace std;

set<string> s; //중복을 제거한 s
bool visited[8] = {false};

bool isBad(string bad, string id) { // 불량 사용자 아이디와 매칭시키기
    if(bad.size() != id.size()) return false;
    
    for(int i=0; i<bad.size(); i++) {
        if(bad[i] == '*') continue;
        if(bad[i] != id[i]) return false;
    }
    return true;
}

void dfs(vector<string>& uid, vector<string>& ban, int idx) {
    if(idx == ban.size()) { //조건에 맞는 아이디를 ban개수만큼 찾았으면
        string tmp;
        for(int i=0; i<uid.size(); i++) {
            if(visited[i]) tmp += uid[i]; //중요한건 s의 사이즈이므로 그냥 합친다. 중복이 있을시 자동으로 삭제된다. 순열이므로 순서가 중요.
        }
        s.insert(tmp);
        return;
    }
    
    for(int i = 0; i< uid.size(); i++) { //uid를 탐색. dfs를 통해 ban.size()개수만큼 뽑아낸다.
        if(visited[i]) continue;     
        if(uid[i].size() != ban[idx].size()) continue;
        
        if(isBad(ban[idx], uid[i])) { //ban의 idx번째 아이디와 비교한다.
            visited[i] = true;
            dfs(uid,ban,idx+1);
            visited[i] = false;
        }
        
    }
}


int solution(vector<string> user_id, vector<string> banned_id) {
    dfs(user_id, banned_id, 0);
    return s.size();
}
