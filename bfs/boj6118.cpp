#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int n, m, a, b, num, cnt, max_dist, dist[20001];
vector<int> graph[20001], res;


void BFS()
{
    queue<int> q;
    q.push(1);
    dist[1] = 1;

    while (!q.empty()) {
        int x = q.front();
        q.pop();

        for (int i = 0; i < graph[x].size(); i++) {
            int nx = graph[x][i];
            if (dist[nx] == 0) {
                q.push(nx);
                dist[nx] = dist[x] + 1;
                if (dist[nx] > max_dist)
                    max_dist = dist[nx];
            }
        }
    }
}


int main()
{
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    BFS();

    for (int i = 1; i <= n; i++)
        if (dist[i] == max_dist)
            res.push_back(i);

    cout << res[0] << ' ' << max_dist - 1 << ' ' << res.size() << '\n';

    return 0;
}
