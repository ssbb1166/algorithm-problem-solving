#include <algorithm>
#include <iostream>
#include <queue>
#define INF 1e9
using namespace std;


int tc, n, m, t, s, g, h, a, b, d, x;
int dist_s[2001], dist_g[2001], dist_h[2001];
vector<int> candidates;
vector<pair<int, int>> graph[2001];


void Dijkstra(int start, int dist[])
{
    for (int i = 1; i <= n; i++)
        dist[i] = INF;

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
            if (nd < dist[nx]) {
                pq.push({ -nd, nx });
                dist[nx] = nd;
            }
        }
    }
}


int main()
{
    cin >> tc;

    for (int i = 0; i < tc; i++) {
        cin >> n >> m >> t;
        cin >> s >> g >> h;
        
        for (int j = 0; j < m; j++) {
            cin >> a >> b >> d;
            graph[a].push_back({ b, d });
            graph[b].push_back({ a, d });
        }

        for (int j = 0; j < t; j++) {
            cin >> x;
            candidates.push_back(x);
        }

        sort(candidates.begin(), candidates.end());

        Dijkstra(s, dist_s);
        Dijkstra(g, dist_g);
        Dijkstra(h, dist_h);

        for (int j = 0; j < candidates.size(); j++) {
            x = candidates[j];
            if (dist_s[g] + dist_g[h] + dist_h[x] == dist_s[x] ||
                dist_s[h] + dist_h[g] + dist_g[x] == dist_s[x])
                cout << x << ' ';
        }
        cout << '\n';

        candidates.clear();
        for (int j = 1; j <= n; j++)
            graph[j].clear();
    }

    return 0;
}
