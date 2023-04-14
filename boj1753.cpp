#include <iostream>
#include <queue>
// 가중치 최댓값이 10이라고 INF 값을 11로 설정하면 바보
#define INF 1e9
using namespace std;


// 정점의 개수(n), 간선의 개수(e), 시작 정점의 번호(k)
// (u, v, w): u에서 v로 가는 가중치 w인 간선
int n, e, k, u, v, w, dist[20001];
vector<pair<int, int>> graph[20001];


void Dijkstra(int start)
{
    priority_queue<pair<int, int>> pq;
    pq.push({ 0, start });
    dist[start] = 0;

    while (!pq.empty()) {
        int d = -pq.top().first;
        int x = pq.top().second;
        pq.pop();

        if (d > dist[x]) continue;

        for (int i = 0; i < graph[x].size(); i++) {
            int nx = graph[x][i].first;
            int nd = d + graph[x][i].second;
            // 우선순위 큐는 값이 클수록 우선순위가 높음
            // 거리가 짧은 정점을 먼저 처리하기 위해 음수로 삽입
            if (nd < dist[nx]) {
                pq.push({ -nd, nx });
                dist[nx] = nd;
            }
        }
    }
}


int main()
{
    cin >> n >> e >> k;

    for (int i = 0; i < e; i++) {
        cin >> u >> v >> w;
        graph[u].push_back({ v, w });
    }

    for (int i = 1; i <= n; i++)
        dist[i] = INF;

    Dijkstra(k);

    for (int i = 1; i <= n; i++)
        if (dist[i] == INF)
            cout << "INF" << '\n';
        else
            cout << dist[i] << '\n';

    return 0;
}
