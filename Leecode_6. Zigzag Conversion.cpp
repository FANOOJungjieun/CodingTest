class Solution {
public:
    string convert(string s, int numRows) {
        
        if(numRows == 1) return s;
        
        
        int jump = numRows + numRows - 2;
        string answer = "";
        
        for(int i=0; i<numRows; i++) {
            int now = i;
            int j = jump;
            
            if(i != 0 && i != numRows-1) j -= (2*i);
            
            while(now < s.size()) {
                answer += s[now];
                if(now+j < s.size() && i != 0 && i != numRows-1) answer += s[now+j];
                now += jump;
            }
        }
        
        return answer;
    }
};
