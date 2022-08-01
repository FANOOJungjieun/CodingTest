/*
Runtime: 5 ms, faster than 25.88% of C++ online submissions for Last Stone Weight.
Memory Usage: 7.7 MB, less than 33.24% of C++ online submissions for Last Stone Weight.
*/


class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;
        
        for(int i=0; i<stones.size(); i++) {
            q.push(stones[i]);
        }
        
        while(q.size()>1) {
            int first = q.top();
            q.pop();
            int second = q.top();
            q.pop();
            
            q.push(abs(first-second));
        }
        return q.top();
    }
};
