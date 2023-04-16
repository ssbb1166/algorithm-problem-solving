#include <iostream>
#include <queue>
#define INF 1e9
using namespace std;


int n, m, x, u, v, t, max_t, dist[1001][2];
vector<pair<int, int>> graph[1001][2];


void Dijkstra(int dir)
{
	priority_queue<pair<int, int>> pq;
	pq.push({ 0, x });
	dist[x][dir] = 0;

	while (!pq.empty()) {
		int d = -pq.top().first;
		int x = pq.top().second;
		pq.pop();

		if (d < dist[x][dir]) continue;

		for (int i = 0; i < graph[x][dir].size(); i++) {
			int nx = graph[x][dir][i].first;
			int nd = d + graph[x][dir][i].second;
			if (nd < dist[nx][dir]) {
				pq.push({ -nd, nx });
				dist[nx][dir] = nd;
			}
		}
	}
}


int main()
{
	cin >> n >> m >> x;

	for (int i = 0; i < m; i++) {
		cin >> u >> v >> t;
		graph[u][0].push_back({ v, t });
		graph[v][1].push_back({ u, t });
	}
	
	for (int i = 1; i <= n; i++) {
		dist[i][0] = INF;
		dist[i][1] = INF;
	}

	Dijkstra(0);  // 가는 데 걸리는 최단 시간
	Dijkstra(1);  // 오는 데 걸리는 최단 시간

	for (int i = 1; i <= n; i++) {
		int tmp = dist[i][0] + dist[i][1];
		if (tmp > max_t)
			max_t = tmp;
	}

	cout << max_t << '\n';

	return 0;
}
