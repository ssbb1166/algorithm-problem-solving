#include <iostream>
#include <queue>
#define INF 999999
using namespace std;


int n, e, k, u, v, w, d[20001];
vector<pair<int, int>> graph[20001];


void Dijkstra(int start)
{
	priority_queue<pair<int, int>> pq;
	pq.push({ 0, start });
	d[start] = 0;

	while (!pq.empty()) {
		int dist = -pq.top().first;
		int now = pq.top().second;
		pq.pop();

		if (d[now] < dist) continue;

		for (int i = 0; i < graph[now].size(); i++) {
			int next = graph[now][i].first;
			int cost = dist + graph[now][i].second;
			if (cost < d[next]) {
				pq.push({ -cost, next });
				d[next] = cost;
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
		d[i] = INF;

	Dijkstra(k);

	for (int i = 1; i <= n; i++)
		if (d[i] == INF)
			cout << "INF" << '\n';
		else
			cout << d[i] << '\n';

	return 0;
}
