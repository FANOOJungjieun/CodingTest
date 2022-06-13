#include <iostream>
#include <vector>
#include<queue>
using namespace std;
#define INF 99999999

vector<int> dik(int start, int N, vector<pair<int, int>> g[]) {
    vector<int> dist(N+1, INF);
    priority_queue<pair<int,int>> pq;
    
    dist[start] = 0;
    pq.push(make_pair(0, start));
    
    while(!pq.empty()) {
        int cur_dist = -pq.top().first; // 큐에서 꺼내 방문하고 있는 정점의 거리
        int cur_node = pq.top().second;
        cout << cur_dist << ", " <<cur_node<<endl; 
        pq.pop();
        
        for(int i=0; i<g[cur_node].size(); i++) {
            int nxt_node = g[cur_node][i].first;  // 인접 정점 번호
            int nxt_dist = g[cur_node][i].second;
            
            if(cur_dist + nxt_dist < dist[nxt_node]) {
                dist[nxt_node] = cur_dist + nxt_dist;  // 거리값 업데이트
                pq.push({ -dist[nxt_node], nxt_node });  // 우선순위 큐에 넣기
            }
        }
    }
    
    return dist;
}

int solution(int N, vector<vector<int> > road, int K) {
    int answer = 0;

    vector<pair<int,int>> g[N+1];
    
    for(int i=0; i<road.size(); i++) {
        int from = road[i][0];
        int to = road[i][1];
        int cost = road[i][2];
        g[from].push_back({to,cost});
        g[to].push_back({from,cost});
        cout << "from : " <<from << ", to : " << to <<endl;
    }
    
    vector<int> dist = dik(1,N,g);
    
    for(int i=1; i<dist.size(); i++) {
        cout << i << " : " << dist[i] << endl;
        if(dist[i] <= K) answer++;
    }
    
    return answer;
}
