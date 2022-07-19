class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answer(numRows);
        
        answer[0].push_back(1);
        
        for(int i=1; i<numRows; i++) {
            for(int j=0; j<i+1; j++) {
                if(j-1<0 || j+1 == i+1) {
                    answer[i].push_back(1);
                } else {
                    answer[i].push_back(answer[i-1][j-1]+answer[i-1][j]);
                }
            }
        }
        return answer;
    }
};
