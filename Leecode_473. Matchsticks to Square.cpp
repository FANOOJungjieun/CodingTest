class Solution {
public:
    int possible;
    vector<int> side{0,0,0,0};
    
    bool dfs(int idx, vector<int>& m) {
        if(idx == m.size()) {
            for(int i =0;i<4;i++) {
                if(side[i] != possible) return false;
            }
            return true;
        }
        
        for(int i=0;i<4; i++) {
            if(side[i] + m[idx] <= possible) {
                side[i] += m[idx];
                if(dfs(idx+1, m)) return true;
                side[i] -= m[idx];
            }
        }
        return false;
    }
    
    bool makesquare(vector<int>& matchsticks) {
        if(matchsticks.size() == 0) return false;
        
        int s = 0;
        
        for(int i=0; i<matchsticks.size(); i++) {
            s += matchsticks[i];
        }
        
        possible = s/4;
        
        if(s%4 != 0) return false;
        
        sort(matchsticks.begin(), matchsticks.end(), greater<>());
        
        return dfs(0, matchsticks);
    }
};
