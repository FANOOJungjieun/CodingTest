//DP, 부분 합 문제.

class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int sum[110][110];
        int answer = 0;
        
        for(int i=0; i<matrix.size(); i++) {
            int s = 0;
            for(int j=0; j<matrix[0].size(); j++) {
                s += matrix[i][j];
                sum[i+1][j+1] = sum[i][j+1] + s;
            }
        }
        
        
        for(int x1=0; x1<matrix.size(); x1++) {
            for(int x2=x1+1; x2<=matrix.size(); x2++) {
                for(int y1 = 0; y1<matrix[0].size(); y1++) {
                    for(int y2 = y1+1; y2 <=matrix[0].size(); y2++) {
                        if(sum[x2][y2]-sum[x1][y2]-sum[x2][y1]+sum[x1][y1] == target) answer++;
                    }
                }
            }
        }
        
        return answer;
    }
};
