/*
Runtime: 4 ms, faster than 23.97% of C++ online submissions for Mirror Reflection.
Memory Usage: 5.9 MB, less than 26.45% of C++ online submissions for Mirror Reflection.
*/

class Solution {
public:
    int mirrorReflection(int p, int q) {
        int m = 1;  // 예를 들어 p=3, q=2일때 2*p = 3*q.
        int n = 1;  
        
        while (m * p != n * q) {// 위 식을 만족하는 m과 n을 찾기
            m = ++n * q / p;
        }
        
        
        if (n % 2 == 0)
          return 2;
        if (m % 2 == 0)
          return 0;
        if (m % 2 == 1)
          return 1;
        throw;
    }
};
