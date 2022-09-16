#include <string>
#include <vector>
#include<algorithm>
#include<cmath>
using namespace std;

int solution(vector<int> stones, int k) {
    
    int left = 1;
    int right = 200000000; //징검다리가 수용할 수 있는 최대 니니즈
    
    while(left<=right){
        int mid = int(floor((left+right)/2));
        int cnt = 0; // 연속적으로 부서진 돌의 수
        
        for(int i =0; i<stones.size(); i++) { // 니니즈의 수를 예측한 뒤 완전탐색
            if(stones[i] <= mid) { // 예측한 니니즈의 수보다 내구도가 낮다면
                cnt++; //부서진 돌의 수 추가
            } else {
                cnt = 0; //아닐 시, 중간다리로 밟고 지나갈 수 있으므로 0으로 초기화
            }
            
            if(cnt >= k) break; //연속적으로 부서진 돌의 수가 k를 넘으면 탐색 종료.
        }
        
        if(cnt>=k) { // 연속적으로 부서진 돌의 수가 k를 넘으면
            right = mid-1; // 우측 기준값을 갱신함(더 낮은 값을 찾아봄)
        } else{
            left = mid+1;
        }
        
    }
    return left;
}
